#include <stdio.h>
#include <cstdlib>

typedef struct Node
{
    int data;   //������
    struct Node* pNext;  //ָ����
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
    printf("����ĳ�����%d\n",len);

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
    int len;        //���������Ч�ڵ�ĸ���
    int val;        //������ʱ����û������ֵ

    //������һ���������Ч���ݵ�ͷ���
    PNODE pHead = (PNODE)malloc(sizeof(NODE));
    if(NULL == pHead){
        printf("����ʧ�ܣ�������ֹ��\n");
        exit(-1);
    }
    pHead->pNext = NULL;
    PNODE pTail = pHead;    //pTailָ�����һ���ڵ�

    printf("����������Ҫ���ɵ�����ڵ�ĸ�����len = ");
    scanf("%d",&len);

    for(int i=0;i<len;i++){
        printf("�������%d�������ֵ��",i+1);
        scanf("%d",&val);

        PNODE pNew = (PNODE) malloc(sizeof(NODE));
        if(NULL == pNew){
            printf("����ʧ�ܣ�������ֹ��\n");
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

    //   ����������ų�

    // ���뵽nλ��(��1��ʼ),Ҫ��֤ǰn-1���ڵ㲻Ϊ����ͷ�ڵ㲻Ϊ�գ�����жϵ�n-1���ڵ�
    while (NULL != p && i<pos-1){  //i<pos-1 �涨��ִ�еĴ�����ִ�е���n-1��  �������λ�ò�Ϊ0����
        p = p->pNext;
        ++i;
    }
    // �����λ�ò�Ϊ0������ǰn-1���ڵ㲻Ϊ��
    if (i>pos-1 || NULL == p){
        return false;
    }

    PNODE pNew = (PNODE) malloc(sizeof(Node));
    if(NULL == pNew){
        printf("��̬�����ڴ�ʧ��\n");
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
    // ɾ��nλ��(��1��ʼ),Ҫ��֤ǰn���ڵ㲻Ϊ�գ�����жϵ�n���ڵ�
    while (NULL!=p->pNext && i<pos-1)
    {
        p = p->pNext;
        ++i;
    }

    if (i>pos-1 || NULL==p->pNext)
        return false;

    //���������ִ�е���һ��˵��p�Ѿ�ָ���˵�pos-1����㣬���ҵ�pos���ڵ��Ǵ��ڵ�
    PNODE q = p->pNext;  //qָ���ɾ���Ľ��
    *pVal = q->data;

    //ɾ��p�ڵ����Ľ��
    p->pNext = p->pNext->pNext;

    //�ͷ�q��ָ��Ľڵ���ռ���ڴ�
    free(q);
    q = NULL;

    return true;

}
