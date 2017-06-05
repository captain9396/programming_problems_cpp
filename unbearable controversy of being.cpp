#include<bits/stdc++.h>
using namespace std;

const int N = 100000;

int par[N];
vector<int>g[N];
bool vis[3000][3000];




int main(){
  int n , m  , u , v;
  cin>>n >> m;
  for(int i = 0 ;i < m ; i++){
    scanf("%d%d" , &u,&v );
    g[u].push_back(v);
  }



}
