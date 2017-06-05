#include<bits/stdc++.h>

using namespace std;

stack < int > stk;
vector< int >g[101010] , rev[101010] , components[101010];

bool vis1[101010] , vis2[101010];

void dfs1(int u){
  vis1[u] = 1;
  for(int i  = 0  ; i < g[u].size() ; i++){
    int v = g[u][i];
    if(!vis1[v]){
      dfs1(v);
    }
  }stk.push(u);
}

void dfs2(int u , int m){
  vis2[u] = 1;
  components[m].push_back(u);
  for(int i = 0; i < rev[u].size(); i++){
    int v = rev[u][i];
    if(!vis2[v])
      dfs2(v , m);
  }
}

void revEdge(int node , int edge){
  for(int i = 1 ; i <= node ; i++){
    for(int j = 0 ; j < g[i].size() ;i ++){
      int v = g[i][j];
      rev[v].push_back(i);
    }
  }
}

int SCC(int n , int m){

  int no_components = 0;

  for(int i = 1 ; i <= n ; i++){
    if(!vis1[i]) dfs1(i);
  }

  revEdge(n , m);

  while(!stk.empty()){
    int T = stk.top() ; stk.pop();
    if(!vis2[T]) {++no_components ; dfs2(T , no_components);}
  }

  return no_components;
}

int main(){
  int node , edge  , u , v ;cin >> node >> edge ;

  for(int i = 0 ; i < edge ; i++){

    cin >> u >> v; g[u].push_back(v);

  }

  int m = SCC(node , edge);
  cout << m << endl;

  for(int i = 1 ; i<= m ; i++){
    cout << "component " << i << " : ";
    for(int j = 0;  j < components[i].size() ; j++) cout << components[i][j] << " ";
    cout << endl;
  }

  return 0;


}














