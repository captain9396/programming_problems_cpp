#include<bits/stdc++.h>
using namespace std;

const int maxn = 100007;
vector < int >g[maxn];
int par[maxn];

bool cycle , vis[maxn];
void dfs(int u){
    vis[u] = 1;
    for(int i = 0 ; i < g[u].size() ; i++){
      int v = g[u][i];
      if(!vis[v]){
        par[v] = u; dfs(v);
      }
      else{
        if(par[u] != v){
          cycle = 1;
          return;
        }
      }
    }
}

int ans;

int main(){
  ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0);
  int n , m  , u , v;
  cin >> n >> m;
  for(int i = 0 ; i < m ; i++){
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  for(int i = 1 ; i <= n ; i++){
    if(!vis[i]){
      cycle = 0;
      dfs(i);
      if(!cycle) ans++;
    }
  }
  cout << ans;

  return 0;
}
