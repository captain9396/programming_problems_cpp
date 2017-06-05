#include<bits/stdc++.h>
using namespace std;

struct Data
{
    int x;
};

class Queue
{
public:
    struct node{
        Data x;
        node* next;
    };
    int s;
    node* root;
    Queue()
    {
        root = NULL;
        s = 0;
    }              // constructor
    void enqueue(Data x);   // enqueues x
    void dequeue();         // removes the front element
    Data front();           // returns the element from the front (without removing it)
    int size();             // returns the count of elements in the queue
    bool isEmpty();         // returns true of the queue is empty
    void print();           // print the elements of the queue in console
};

void Queue:: enqueue(Data x){
    node* T = new node();
    T->x = x;
    T->next = root;
    root = T;
    s++;
}

void Queue::dequeue(){
    if(s){
        node* T = root;
        root = root->next;
        delete(T);s--;
    }
}

Data Queue::front(){
    return root->x;
}

int Queue::size(){
    return s;
}

bool Queue::isEmpty(){
    return !(s);
}

void Queue:: print(){
    node* T = root;
    while(T!= NULL){
        printf("%d ", T->x);
        T = T->next;
    }
    cout<<endl;
}

int main(){
    Data a;
    a.x = 10;
    Queue foo;
    foo.enqueue(a);
    foo.print();
    return 0;
}
