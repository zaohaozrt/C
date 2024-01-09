#include <iostream>
using namespace std;

typedef struct{
    int front;
    int rear;
    int data[8];
}SqQueue;

int maxSize = 8;

void initQueue(SqQueue &qu);
int isQueueEmpty(SqQueue qu);
int enQueue(SqQueue &qu,int x);
int deQueue(SqQueue &qu,int &x);

int main(){
    SqQueue sqQueue;
    int x;

    initQueue(sqQueue);
    enQueue(sqQueue,1);
    enQueue(sqQueue,2);
    deQueue(sqQueue,x);
    deQueue(sqQueue,x);
    cout<<x<<endl;

    return 0;
}

void initQueue(SqQueue &qu){
    qu.front = qu.rear = 0;
}

int isQueueEmpty(SqQueue qu){
    if(qu.front == qu.rear){
        return 1;
    }else{
        return 0;
    }
}
// rearָ��Ķ������һ��Ԫ��
int enQueue(SqQueue &qu,int x){
    // ����Ƿ����
    if(((qu.rear)+1)%maxSize == qu.front){
        return 0;
    }
    qu.rear = (qu.rear+1)%maxSize;
    qu.data[qu.rear] = x;
    return 1;
}

// frontָ��Ķ��е�һ��Ԫ��ǰ����Ǹ�Ԫ��
int deQueue(SqQueue &qu,int &x){
    // ����Ƿ�ӿ�
    if(qu.front == qu.rear){
        return 0;
    }
    qu.front = (qu.front+1)%maxSize;
    x = qu.data[qu.front];
    return 1;
}