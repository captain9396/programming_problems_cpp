#include<bits/stdc++.h>
using namespace std;
struct Trie{
    bool endmark;
    Trie* next[27];
    Trie()
    {
        endmark = false;
        for(int i =0; i<26;i ++) next[i] = NULL;
    }
};

Trie* root = NULL;

void Insert(string s){
    Trie* T = root;
    if(root == NULL){
        root = new Trie();
        T = root;
    }
    for(int i=0; s[i];i ++){
        if(T->next[i] == NULL) T -> next[i] = new Trie();
        T = T -> next[i];
    }
    T -> endmark = true;
}

bool Search(string s){
    Trie* T = root;
    for(int i=0; s[i]; i ++){
        if(T->next[i] == NULL) return false;
        T = T ->next[i];
    }
    return T -> endmark;
}

void Destroy(Trie* T){
    for(int i=0 ; i<26; i++){
        if(T->next[i]) Destroy(T->next[i]);
    }
    delete(T);
}

int main(){
    int n ; cin>>n;
    while(n--){
        string foo; cin>>foo;
        Insert(foo);
    }
    int query; cin>>query;
    while(query--){
        string bar; cin>>bar;
        (Search(bar)) ? cout<<"yes"<<endl   : cout<<"no"<<endl;
    }
    return 0;
}
