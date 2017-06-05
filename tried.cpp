#include<bits/stdc++.h>
using namespace std;

struct Trie{
    bool endmark;
    Trie* next[27];
    Trie()
    {
        endmark = false;
        for(int i =0; i<26; i++) next[i] = NULL;
    }
};

Trie* root = NULL;

void Insert(string s){
    Trie* T = root;
    if(root == NULL) {
        root = new Trie();
        T = root;
    }

    for(int i=0; s[i] ; i++){
        int id = s[i] - 'a';
        if(T -> next[id] == NULL) T ->next[id] = new Trie();
        T  = T ->next[id];
    }
    T -> endmark = true;
}

bool Search(string s){
    Trie* T = root;

    for(int i=0; s[i] ; i++){
        int id = s[i] - 'a';
        if(T -> next[id] == NULL) return false;
        T  = T ->next[id];
    }
    return T -> endmark;
}


void Delete(Trie* T){
    for(int i =0 ; i<26; i++){
        if(T->next[i]) Delete(T ->next[i]);
    }
    delete(T);
}
int main(){
    int n ;cin>>n;
    while(n--){
        string foo;
        cin>>foo;
        Insert(foo);
    }

    int query;
    cin>>query;
    while(query--){
        string bar;
        cin>>bar;
        (Search(bar)) ? cout<<"yes"<<endl : cout<<"no"<<endl;
    }

    Delete(root);
    return 0;
}
