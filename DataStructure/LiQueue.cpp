#include <iostream>
using namespace std;

typedef struct QNode{
    int data;
    struct QNode* next;
}QNode;

struct LiQueue{
    QNode* front;
    QNode* rear;
};

void initQueue(LiQueue*& lqu);
void enQueue(LiQueue* lqu,int x);
int deQueue(LiQueue* lqu,int &x);
int isQueueEmpty(LiQueue* lqu);

int main(){
    struct LiQueue* liQueue;
    initQueue(liQueue);

    enQueue(liQueue,1);
    enQueue(liQueue,2);
    enQueue(liQueue,3);
    int x;
    deQueue(liQueue,x);
    cout<<x<<endl;
    deQueue(liQueue,x);
    cout<<x<<endl;



    return 0;
}


void initQueue(LiQueue  *&lqu){         // 指针的引用
    lqu = (LiQueue*) malloc(sizeof(LiQueue));
    lqu->front = lqu->rear = NULL;
}

int isQueueEmpty(LiQueue* lqu){
    if(lqu->rear == NULL || lqu->front==NULL){
        return 1;
    }else{
        return 0;
    }
}

void enQueue(LiQueue* lqu,int x){
    QNode* p;
    p = (QNode*) malloc(sizeof (QNode));
    p->data = x;
    p->next = NULL;
    if(lqu->rear ==NULL){               //若队列为空，则新结点是队首结点也是队尾结点
        lqu->front = lqu->rear = p;
    }else{
        lqu->rear->next = p;
        lqu->rear = p;                  // rear 指向队尾元素
    }
}

int deQueue(LiQueue* lqu,int &x){
    QNode* p;
    if(lqu->rear == NULL){      // 队空不能出队
        return 0;
    }else{
        p = lqu->front;     // p指向要free的元素
    }
    if(lqu->front == lqu->rear){    // 队中只有一个结点时
        lqu->front = lqu->rear = NULL;
    }else{
        lqu->front = lqu->front->next;
    }
    x = p->data;
    free(p);
    return 1;

}