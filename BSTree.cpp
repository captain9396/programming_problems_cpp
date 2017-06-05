#include<bits/stdc++.h>
using namespace std;

struct Tree{
    int data;
    Tree* left;
    Tree* right;
    Tree()
    {
        left = NULL; right = NULL;
    }
};

Tree* root = NULL;

void Insert(int x , Tree* node, Tree* par){
    if(root == NULL){
        Tree* T = new Tree() ; T->data = x; root = T;
    }
    if(node == NULL && root!= NULL){
        Tree* T = new Tree();
        T->data = x;
        if(x >= par->data) par->right = T;
        else par->left = T;
        return;
    }
    if(x >= node->data) Insert(x, node->right, node);
    if(x < node->data) Insert(x , node->left, node);
}

void Preorder(Tree* node){
    printf("%d ", node->data);
    Preorder(node->left);
    Preorder(node->right);
}

void Delete(Tree* node){
    if(node){
        Delete(node->left);
        Delete(node->right);
    }
}

int main(){
    int n , a; cin>>n;
    Tree* temp = NULL;
    for(int i = 0 ; i<n; i++){
        cin>>a;

        Insert(a , root , temp);
    }
    Preorder(root);
    //Delete(root);
}
