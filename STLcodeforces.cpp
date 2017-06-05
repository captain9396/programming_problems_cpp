#include<bits/stdc++.h>
#define MAX(a,b) ((a > b) ? (a) : (b))
using namespace std;

vector< string >foo;
string str;

int pos , limit;

struct node{
  int mark; node* left ; node* right ;
  node() { mark = 0; left = right = NULL;}
};

node* root;

void build(node* p , int n){
  if(p == NULL) {
    p = new node();
    p->mark  = 1;
    return;
  }
}


//bool check(){
//  for(int i = 1; i <= limit; i++){
//    if(mark[i] == 1){
//      if(mark[i << 1] && mark[(i << 1)+1])continue;
//      else return false;
//    }
//  }
//  return true;
//}

//void print(int node){
//  mark[node] == 1 ? printf("pair<") : printf("int");
//  if(mark[node << 1]) print(node << 1);
//  if(mark[node] == 1)putchar(',');
//  if(mark[(node<<1) + 1]) print((node<<1) + 1);
//  if(mark[node] == 1)putchar('>');
//}

/// pair pair int int int

int main(){
  root = NULL;
  int t  , n = 0; cin>>t;
  char str[6];
  string bar;

  while(scanf("%s" , str ) != EOF){
    bar = str;
    foo.push_back(bar);
    n++;
  }


  build(root, n);
//  bool chk = check();
//
//  if(chk)
//    print(1);
//  else cout << "Error occurred";
//
cout << root->mark;

  return 0 ;

}
