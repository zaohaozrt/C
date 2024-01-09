#include <stdio.h>
#include <cstdlib>

typedef struct Node
{
    int data;   //数据域
    struct Node* pNext;  //指针域
}NODE,*PNODE;

PNODE create_list();
void traverse_list(PNODE pHeader);
bool is_empty(PNODE pHead);
int length_list(PNODE);
bool insert_list(PNODE,int,int);
bool delete_list(PNODE,int,int*);
void sort_list(PNODE);

int main(){
    PNODE  pHead = NULL;
    pHead = create_list();
    traverse_list(pHead);
    int len = length_list(pHead);
    printf("链表的长度是%d\n",len);

    sort_list(pHead);
    traverse_list(pHead);
    insert_list(pHead,2,100);
    traverse_list(pHead);

    int val;
    delete_list(pHead,1,&val);
    traverse_list(pHead);


    return 0;
}

PNODE create_list(){
    int len;        //用来存放有效节点的个数
    int val;        //用来临时存放用户输入的值

    //分配了一个不存放有效数据的头结点
    PNODE pHead = (PNODE)malloc(sizeof(NODE));
    if(NULL == pHead){
        printf("分配失败，程序终止！\n");
        exit(-1);
    }
    pHead->pNext = NULL;
    PNODE pTail = pHead;    //pTail指向最后一个节点

    printf("请输入您需要生成的链表节点的个数：len = ");
    scanf("%d",&len);

    for(int i=0;i<len;i++){
        printf("请输入第%d个几点的值：",i+1);
        scanf("%d",&val);

        PNODE pNew = (PNODE) malloc(sizeof(NODE));
        if(NULL == pNew){
            printf("分配失败，程序终止！\n");
            exit(-1);
        }
        pNew->data = val;
        pNew->pNext = NULL;
        pTail->pNext = pNew;
        pTail = pNew;
    }
    return pHead;

}

void traverse_list(PNODE pHead){
    PNODE p = pHead->pNext;

    while (NULL != p){
        printf("%d  ",p->data);
        p = p->pNext;
    }
    printf("\n");

    return;
}

bool is_empty(PNODE pHead){
    if(NULL == pHead->pNext){
        return true;
    }else{
        return false;
    }
}

int length_list(PNODE pHead){
    PNODE p = pHead->pNext;
    int len = 0;

    while (p != NULL){
        ++len;
        p = p->pNext;
    }
    return len;
}

void sort_list(PNODE pHead){
    int i,j,t;
    PNODE p,q;
    int len = length_list(pHead);
    for(i=0,p=pHead->pNext;i<len-1;++i,p=p->pNext){
        for(j=i+1,q=p->pNext;j<len-1;++j,q=q->pNext){
            if(p->data > q->data){
                t = p->data;
                p->data = q->data;
                q->data = t;
            }
        }
    }
}

bool insert_list(PNODE pHead,int pos,int val){
    int i=0;
    PNODE p = pHead;

    //   把意外情况排除

    // 插入到n位置(从1开始),要保证前n-1个节点不为空且头节点不为空，最后判断第n-1个节点
    while (NULL != p && i<pos-1){  //i<pos-1 规定了执行的次数，执行到第n-1个  且输入的位置不为0或负数
        p = p->pNext;
        ++i;
    }
    // 输入的位置不为0或负数，前n-1个节点不为空
    if (i>pos-1 || NULL == p){
        return false;
    }

    PNODE pNew = (PNODE) malloc(sizeof(Node));
    if(NULL == pNew){
        printf("动态分配内存失败\n");
        exit(-1);
    }
    pNew->data = val;
    PNODE q = p->pNext;
    p->pNext = pNew;
    pNew->pNext = q;

}


bool delete_list(PNODE pHead, int pos, int * pVal)
{
    int i = 0;
    PNODE p = pHead;
    // 删除n位置(从1开始),要保证前n个节点不为空，最后判断第n个节点
    while (NULL!=p->pNext && i<pos-1)
    {
        p = p->pNext;
        ++i;
    }

    if (i>pos-1 || NULL==p->pNext)
        return false;

    //如果程序能执行到这一行说明p已经指向了第pos-1个结点，并且第pos个节点是存在的
    PNODE q = p->pNext;  //q指向待删除的结点
    *pVal = q->data;

    //删除p节点后面的结点
    p->pNext = p->pNext->pNext;

    //释放q所指向的节点所占的内存
    free(q);
    q = NULL;

    return true;

}
