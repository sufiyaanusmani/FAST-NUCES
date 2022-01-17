#include <iostream>
using namespace std;

struct node{
    int val;
    node *next;
};

node * newNode(int, node *);
void display(node *);

int main(){
    node *head;
    head = new node;
    head->val = 4;
    head->next = NULL;
    node *current = head;
    current = newNode(6, current);
    current = newNode(55, current);
    current = newNode(88, current);
    display(head);
    delete head;
    delete current;
    return 0;
}

node * newNode(int value, node *current){
    node *n;
    n = new node;
    n->val = value;
    n->next = NULL;
    current->next = n;
    return n;
}

void display(node *h){
    node *current = h;
    while(current != NULL){
        cout << current->val << endl;
        current = current->next;
    }
    delete current;
}