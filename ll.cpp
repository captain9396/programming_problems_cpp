#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

node* head = NULL;
node* tail = NULL;

void Append(int x){
    if(tail == NULL){
        node* t  = new node();
        t->data = x;
        t->next = NULL;
        t->prev = NULL;
        head = t;
        tail = t;
    }
    else{
        node* t = new node();
        t ->data = x;
        t->next = NULL;
        t->prev = tail;
        tail->next = t;
        tail = t;
    }
}

void Print(){
    node* t = head;
    while(t != NULL){
        printf("%d ", t->data);
        t = t -> next;
    }
}

int main(){
    for(int i=1; i<11; i++) Append(i);
    Print();
    return 0;
}
