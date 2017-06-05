#include<bits/stdc++.h>

using namespace std;

struct Trie{
  bool mark;
  Trie* a[27];
  Trie()
  {
    mark = false;
    for(int i = 0 ; i  < 26 ; i++) a[i] = NULL;
  }
};
Trie* root  = NULL;

void In(string s){

  if(root == NULL){
    Trie* T = new Trie();
    root = T;
  }
  Trie* pos= root;
  for(int i = 0 ; s[i]; i++){
    int id = s[i] - 'a';
    if(pos->a[id] == NULL){
      Trie* T = new Trie();
      pos -> a[id] = T;
    }
    pos = pos -> a[id];
  }
  pos -> mark = true;
}

bool Find2(string s){

  Trie* pos= root;
  for(int i = 0 ; s[i]; i++){
    int id = s[i] - 'a';
    if(pos->a[id] == NULL){
      return false;
    }
    pos = pos -> a[id];
  }
  return pos -> mark;
}

bool Find(string s){

  Trie* pos= root;
  for(int i = 0 ; s[i]; i++){
    int id = s[i] - 'a';
    if(pos->a[id] == NULL){
      for(int j = 0 ; j < 26 ; j++){
        s[i] = 'a' + j;
        if(Find2(s)) return true;
      }
      return false;
    }
    pos = pos -> a[id];
  }
  if(pos -> mark == false) return true;
  else return false;
}



int main(){

  string foo;
  int n , m ; cin>>n>>m;
  while(n--){
    cin>>foo;
    In(foo);
  }

  while(m--){
    cin>>foo;
    if(Find(foo)) cout << "yes"<<endl;
    else cout << "no" <<endl;
  }


  return 0;
}
