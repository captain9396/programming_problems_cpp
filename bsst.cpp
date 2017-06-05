#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* right;
    node* left;
    node(){
        right = NULL;
        left = NULL;
    }
};

node* root=NULL;

void Insert(int x){
    if(root ==NULL){
        node* t = new node();
        t->data = x;
        root = t;
    }
    else{
        node* cur = root ;
        node* par;
        while(cur!=NULL){
            if(x < cur->data){
                par = cur;
                cur = cur->left;
            }
            else{
                par = cur;
                cur = cur->right;
            }
        }
        node* t = new node();
        t->data = x;
        if(x < par->data) par->left = t;
        else par->right = t;
    }
}

void Postorder(node* cur){
    if(cur == NULL ) return;
    Postorder(cur->left);
    Postorder(cur->right);
    printf("%d ", cur->data);
}

void Preorder(node* cur){
    if(cur == NULL ) return;
    printf("%d ", cur->data);
    Preorder(cur->left);
    Preorder(cur->right);
}

void Inorder(node* cur){
    if(cur == NULL ) return;
    Inorder(cur->left);
    printf("%d ", cur->data);
    Inorder(cur->right);

}

int main(){
    Insert(5);
    Insert(7);
    Insert(2);
    Insert(1);
    Insert(3);
    Insert(6);
    Preorder(root);
    cout<<endl;
    Postorder(root);
    cout<<endl;
    Inorder(root);
    return 0;
}
