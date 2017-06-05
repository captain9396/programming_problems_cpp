#include<bits/stdc++.h>
using namespace std;

struct node{
    bool endmark;
    node *next[26+1];
    node(){
        endmark = false;
        for(int i=0; i<26 ; i++) next[i] = NULL;
    }
}*root;

void Insert(char* s){
    node* cur = root;
    for(int i=0; s[i]; i++){
        int id= s[i] - 'a';
        if(cur->next[id]==NULL) cur = new node();
        cur = cur -> next[id];
    }
    cur->endmark = true;
}

bool  Search(char* s){
    for(int i=0; s[i]; i++){
        int id = s[i] - 'a';
        if(cur->next[id])  cur = cur->next[id];
        else return false;
    }
    return cur->endmark;
}

void Delete(node* n){
    node* cur =
    for(int i=0)
}

int main(){

}
