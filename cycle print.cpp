#include<bits/stdc++.h>
using namespace std;

const int maxn = 10007;

vector< int >g[maxn];
bool vis[maxn] , cycle;
pair<int,int> criticalPoint;
int par[maxn];

void dfs(int u){
  vis[u] =  1;
  cout << "visiting " << u << endl;
  for(int i = 0 ;  i < g[u].size(); i ++){
    int v = g[u][i];
    if(!vis[v]){
      par[v] = u;
      dfs(v);
    }
    else if(par[u] != v){
      cout << "cycle at " << v << endl;
      cycle = 1;
      criticalPoint = make_pair(u , v);
      return;
    }
  }
}

int main(){
  int n , m , u , v;

  cin >> n >> m;

  for(int i = 0 ; i < n ; i++){
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  dfs(1);
  for(int i = 1 ; i<= n;  i++) cout << par[i] << ' ' ;
  cout << endl;

  cout << criticalPoint.first << ' ' << criticalPoint.second;
  return 0;
}
