#include<bits/stdc++.h>
using namespace std;
class Stack{
public:
    int sz;
    struct node{
        int data;
        node* next;
    };
    node* root;
    Stack()
    {
        root = NULL;
        sz = 0;
    }
    void Push(int x){
        node* T = new node();
        T->data = x;
        T ->next = root;
        root = T;
        sz++;
    }
    void Pop(){
        node* T = root;
        root = root->next;
        delete(T);
    }
    int Top(){ return root->data; }
    int Size(){return sz;}
    void Show(){
        node* T = root;
        while(T!=NULL){
            printf("%d ", T->data);
            T = T ->next;
        }
        cout<<'\n';
    }

    void Destroy(node* T){
        if(T->next) Destroy(T->next);
        delete(T);
    }
};

int main()
{
    Stack foo;
    foo.Push(3);
    foo.Push(5);
    foo.Push(4);
    foo.Push(2);
    foo.Show();
    foo.Destroy(foo.root);

    Stack bar;
    bar.Push(1);
    bar.Push(2);
    bar.Push(3);
    bar.Push(4);
    bar.Show();
    bar.Destroy(bar.root);
    return 0;
}
