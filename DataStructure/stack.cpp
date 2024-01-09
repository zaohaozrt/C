#include <malloc.h>
#include <stdio.h>
#include <cstdlib>

typedef struct Node
{
    int data;
    struct Node* pNext;
}NODE,*PNODE;

typedef struct Stack
{
    PNODE pTop;
    PNODE pBottom;
}STACK,* PSTACK;


void init(PSTACK pS);
void push(PSTACK,int);
void traverse(PSTACK);
bool pop(PSTACK,int*);

int main(){
    STACK S;

    init(&S);
    push(&S,1);
    push(&S,2);
    traverse(&S);
    int val;
    pop(&S,&val);
    pop(&S,&val);
    pop(&S,&val);
    traverse(&S);

    return 0;
}

void init(PSTACK pS){
    pS->pBottom = (PNODE) malloc(sizeof(NODE));
    if(NULL == pS->pBottom){
        printf("动态内存分配失败!\n");
        exit(-1); //终止整个程序
    }else{
        pS->pBottom->pNext = NULL;
        pS->pTop = pS->pBottom;
    }
}

void push(PSTACK pS,int val){
    PNODE pNew = (PNODE) malloc(sizeof(Node));
    pNew->data = val;
    pNew->pNext = pS->pTop;
    pS->pTop = pNew;
    return;
}

void traverse(PSTACK pS){
    PNODE p = pS->pTop;

    while (p != pS->pBottom){
        printf("%d ",p->data);
        p = p->pNext;
    }
    printf("\n");
    return;
}

bool empty(PSTACK pS){
    if(pS->pTop == pS->pBottom){
        return true;
    }else{
        return false;
    }
}

//可能存在两个指针都指向头结点  出栈失败
bool pop(PSTACK pS,int* pVal){
    if(empty(pS)){
        return false;
    }else{
        PNODE r = pS->pTop;
        *pVal = r->data;
        pS->pTop = r->pNext;
        free(r);
        r = NULL;

        return true;
    }
}

void clear(PSTACK pS){
    if(empty(pS)){
        return;
    }else{
        PNODE p = pS->pTop;
        PNODE q = NULL;

        while (p != pS->pBottom){
            q = p->pNext;
            free(p);
            p = q;
        }
        pS->pTop = pS->pBottom;
    }
}
