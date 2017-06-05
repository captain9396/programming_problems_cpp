  #include<bits/stdc++.h>
using namespace std;


const int N = 101010;
vector<int>g[N];

bool visited[N];

int d[N], low[N] , parent[N] ,  timer;

void dfs(int u){
    visited[u] = true;
    d[u] = low[u] = ++timer;
    for (int i = 0; i < g[u].size() ; ++i){
        int v = g[u][i];
        if (!visited[v]){
            parent[v] = u;
            dfs(v);
            low[u]  = min(low[u], low[v]);

            if (d[u] < low[v] ){
              cout << u <<" " << v << endl;
            }
        }
        else if (v != parent[u]){
            low[u]  = min(low[u], d[v]);
        }
    }
}

int main(){
  int node , edge ; cin>>node>>edge;
  int u , v;
  for(int i = 0 ; i < edge ; i++){
    cin>>u>>v;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  dfs(1);

  return 0;
}

/**

1 0
0 2
2 1
0 3
3 4

0 1
1 2
2 3

#



            */
