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
// rear指向的队列最后一个元素
int enQueue(SqQueue &qu,int x){
    // 检查是否队满
    if(((qu.rear)+1)%maxSize == qu.front){
        return 0;
    }
    qu.rear = (qu.rear+1)%maxSize;
    qu.data[qu.rear] = x;
    return 1;
}

// front指向的队列第一个元素前面的那个元素
int deQueue(SqQueue &qu,int &x){
    // 检查是否队空
    if(qu.front == qu.rear){
        return 0;
    }
    qu.front = (qu.front+1)%maxSize;
    x = qu.data[qu.front];
    return 1;
}