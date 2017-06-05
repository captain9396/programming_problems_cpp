#include<bits/stdc++.h>
#define MAX(a , b) ((a > b) ? (a) : (b))
using namespace std;

const int N = 101010;

vector<int>g[N] ;
int  lamp[N] , leaf[N];
int  maxtable[N];
bool vis[N] , vis2[N];
int answer;
int Maxleaf;

void dfs1(int u , int ret){
  int l = u << 1 , r = (u << 1) + 1;
  if(lamp[l] == -1 && lamp[r] == -1){
    Maxleaf = MAX(Maxleaf , ret + lamp[u]);
  }
  else{
    dfs1(l , ret + lamp[u]);
    dfs1(r , ret + lamp[u]);
  }
}


int main(){
  int n ,  p;cin>>n ;
  memset(lamp , -1 , sizeof lamp);
  lamp[1] = 0;
  for(int i = 2 ; i <  (1 << (n+1))  ; i++){
    cin>> p;
    lamp[i] = p;
  }

  dfs1(1 , 0);

  cout << Maxleaf <<endl;

  return 0;
}





