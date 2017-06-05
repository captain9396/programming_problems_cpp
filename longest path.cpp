#include<bits/stdc++.h>

using namespace std;

const int N = 50007;
vector< int >g[N];
pair<int ,int > mxnode ;
bool vis[N];
int deg[N];

void dfs(int u , int dx){
  vis[u] = true;
  if(dx > mxnode.second){
    mxnode.first = u;
    mxnode.second = dx;
  }
  for(int i = 0 ; i < g[u].size() ; i++){
    int v = g[u][i];
    if(!vis[v]) dfs(v , dx + 1);
  }
}

int main(){
  int n  ; cin>>n;
  int u , v;
  for(int i = 0 ; i < n - 1 ; i++){
    scanf("%d%d" , &u , &v);
    g[u].push_back(v);
    g[v].push_back(u);
    deg[u]++; deg[v]++;
  }

  int mark;
  for(int i = 1 ;i <= n ;i++){
    if(deg[i] == 1){
      mark = i;
      break;
    }
  }

  dfs(mark , 0);
  cout << mxnode.second;
  return 0;

}
