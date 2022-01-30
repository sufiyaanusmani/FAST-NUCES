#include <iostream>
#include <stdlib.h>
#define SIZE 5
using namespace std;

class Queue{
    private:
        int q[SIZE];
        int in, out;
        bool isEmpty, isFull;
        int inc(int);
    public:
        Queue();
        void enqueue(int);
        int dequeue();
        void printQueue();
};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(22);
    q.enqueue(55);
    q.enqueue(66);
    q.enqueue(99);
    q.printQueue();
    cout << q.dequeue() << endl;
    q.printQueue();
    cout << q.dequeue() << endl;
    q.printQueue();
    cout << q.dequeue() << endl;
    q.printQueue();
    return 0;
}

Queue::Queue(){
    int i;
    for(i=0;i<SIZE;i++){
        q[i] = 0;
    }
    in = out = 0;
    isEmpty = true;
    isFull = false;
}

int Queue::inc(int val){
    if(val == SIZE - 1){
        val = 0;
    }else{
        val = val + 1;
    }
    return val;
}

void Queue::enqueue(int val){
    if(isFull == true){
        throw "Queue is full";
        exit(1);
    }
    
    q[in] = val;
    in = inc(in);

    if(in == out){
        isFull = true;
    }
    isEmpty = false;
}

int Queue::dequeue(){
    if(isEmpty == true){
        throw "Queue is empty";
        exit(1);
    }
    int ret = q[out];
    out = inc(out);
    if(in == out){
        isEmpty = true;
    }
    isFull = false;
    return ret;
}

void Queue::printQueue(){
    int i;
    for(i=0;i<SIZE;i++){
        cout << q[i] << "  ";
    }
    cout << endl;
}