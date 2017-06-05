#include<bits/stdc++.h>

using namespace std;

const int N = 101010;

vector<int>g[N];
bool vis[N] , AP[N];

int d[N] , low[N] , timer;

void dfs(int u){
//  vis[u] = true;
  d[u] = low[u] = ++timer;
  int child = 0;
  for(int i = 0 ; i < g[u].size() ; i++){
    int v = g[u][i];
    if(!d[v]){
      child++;
      dfs(v);
      low[u] = min(low[u],  low[v]);
      if((u == 1 && child > 1) || ( u != 1 && d[u] <= low[v])){
        AP[u] = true;
      }
    }
    else{
      low[u] = min(low[u] , d[v]);
    }
  }
}

int main(){
  int node , edge ;
  cin>>node>>edge;
  for(int i = 0 ; i < edge ; i++){
    int u , v;
    cin>>u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  dfs(1);
  for(int i = 1 ; i <= node ; i++){
    AP[i] ? cout << i<<" " : cout << "" ;
  }
  return 0;
}
