#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
};

node* head = NULL;

void Append(int x){
    if(head==NULL){
        node* t = new node();
        t->data = x;
        t->next = head;
        head = t;
    }
    else {
        node* t = head;
        while(true){

            if(t->next==NULL){
                node* notun = new node();
                notun->data = x;
                notun->next = NULL;
                t->next = notun;
                break;
            }
            t = t->next;
        }
    }
}

void ShowList(){
    node* t= head;
    while(t != NULL){
        printf("%d " , t->data);
        t = t->next;
    }
}
int main(){
    Append(3);
    Append(1);
    Append(3);
    Append(5);
    Append(6);
    Append(78);

    ShowList();
    return 0;
}
