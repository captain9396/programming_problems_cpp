#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next, *prev;
};

node* head = NULL;
node* tail = NULL;

void AppendLast(int x){

    if(head == NULL){
        node* t = new node();
        t->data = x;
        t->next = NULL;
        tail = t;
        head = t;
    }
    else{
        node* t = new node();
        t->data = x;
        t->prev = tail;
        tail->next = t;
        t->next = NULL;
        tail = t;
    }
}

void Print(){
    node* t = head;
    while(t != NULL){
        printf("%d ", t->data );
        t  = t->next;
    }
}

int main(){
    AppendLast(3);
    Print();
    getchar();
    AppendLast(4);
    Print();
    getchar();
    AppendLast(10);
    Print();
    return 0;
}
