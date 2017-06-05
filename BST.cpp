#include<bits/stdc++.h>
using namespace std;
/// IMPLEMENTING BINARY SEARCH TREE
struct node{
    int data;
    node* left;
    node* right;
    node()
    {
        left = NULL;
        right = NULL;
    }
};

node* root = NULL;

void Insert(int x){
    if(root==NULL){
        node* t = new node();
        t->data = x;
        root = t;
    }
    else{
        node* cur = root;
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

void Preorder(node* cur){

}

int main(){

}
