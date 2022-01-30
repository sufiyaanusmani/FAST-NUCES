#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
#define SIZE 5

class Queue{
    private:
        int arr[SIZE];
        int in, out;
        bool isEmpty, isFull;
        int increment(int);
        public:
            Queue();
            void display();
            void enqueue(int);
            int dequeue(); 
};

int main(){
    Queue q;
    int choice, val;
    while(1){
        system("cls");
        cout << "1 - Enqueue" << endl;
        cout << "2 - Dequeue" << endl;
        cout << "3 - Exit" << endl << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                system("cls");
                cout << "Enter value to enqueue: ";
                cin >> val;
                q.enqueue(val);
                q.display();
                getch();
                break;
            case 2:
                system("cls");
                val = q.dequeue();
                cout << "Value dequeued: " << val << endl;
                q.display();
                getch();
                break;
            case 3:
                exit(0);
                break;
            default:
                cout << "Wrong choice entered" << endl;
                break;
        }
    }
    return 0;
}

Queue::Queue(){
    int i;
    for(i=0;i<SIZE;i++){
        arr[i] = -1;
    }
    in = 0;
    out = 0;
    isEmpty = true;
    isFull = false;
}

void Queue::display(){
    int i;
    cout << "Current Queue: ";
    for(i=0;i<SIZE;i++){
        if(arr[i] != -1){
            cout << arr[i] << "   ";
        }
    }
        cout << endl;
}

int Queue::increment(int index){
    if(index == SIZE - 1){
        index = 0;
    }else{
        index = index + 1;
    }
    return index;
}

void Queue::enqueue(int num){
    if(isFull == true){
        cout << "\aQueue is currently full, can not enqueue current item" << endl;
        return;
    }else{
        arr[in] = num;
        in = increment(in);
        
        if(in == out){
            isFull = true;
        }
        isEmpty = false;
    }
}

int Queue::dequeue(){
    int val;
    if(isEmpty == true){
        cout << "\aQueue is currently empty" << endl;
        exit(1);
    }else{
        val = arr[out];
        arr[out] = -1;
        out = increment(out);
        if(in == out){
            isEmpty = true;
        }
        isFull = false;
        return val;
    }
}