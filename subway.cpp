#include<bits/stdc++.h>
using namespace std;

/// printing cycle

int col[100007] , vis[100007] , par[100007];

vector< int >g[100007];
vector<int > st[10];

int po , cycle;

void dfs(int u){
  vis[u] = 1;
  st[po].push_back(u);
  cout << "visting " << u << endl;
  for(int v : g[u]){
    par[v] = u;
    if(!vis[v])dfs(v);
    else if(par[u] != v){
      cycle = v;
      cout << "found cycle at " << u << endl;
      po++;
    }
  }
  if(st[po].size()) st[po].pop_back();
}

int main(){
  ios_base::sync_with_stdio(0) ; cin.tie(0); cout.tie(0);
  int n ,  m ; cin >> m;
  int u , v;
  for(int i = 0 ; i <  m  ; i++){
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  dfs(1 );
 int  y = 0;
//  while(st[0][y]!= cycle) y++;
  cout << cycle << endl;
  for(int i = 0; i < st[0].size() ; i++) cout << st[0][i]<< ' ';

  return 0;


}
/*

int  y = 0;
  while(st[0][y]!= cycle) y++;
  for(int i = y; i < st[0].size() ; i++) cout << st[0][i]<< ' ';

/**

8
1 2
2 6
2 3
4 8
3 4
3 7
1 5
4 1



*/
