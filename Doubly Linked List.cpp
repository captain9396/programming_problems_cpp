/// doubly linked list

#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
};

node* head = NULL;
node* tail = NULL;

void Push_front(int x){

    if(head==NULL){
        node* t = new node();
        t->data = x;
        t->prev = NULL;
        if(tail == NULL) tail = t;
        head = t;
    }
    else{
        node* t = new node();
        t->data = x;
        t->prev = head;
        head->next = t;
        head = t;
    }
}


void Push_back(int x){
    if(tail == NULL){
        node* t = new node();
        t->data = x;
        t->prev = NULL;
        if(head==NULL) head = t;
        tail = t;
    }
    else {
        node* t = new node();
        t->data = x;
        tail->prev = t;
        t->next = tail;
        t->prev = NULL;
        tail = t;
    }
}
void Print(){
    node* t = head;
    while(t != NULL){
        printf("%d ", t->data);
        t = t->prev;
    }
}

int main(){
    Push_back(4);
    Print();
    return 0;
}

