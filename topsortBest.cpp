#include<bits/stdc++.h>
using namespace std;

const int N = 100000;

vector<int>g[N] ;
stack<int>Topsorted;
bool vis[N];


void Dfs(int n){
  vis[n] = true;
  for(int i = 0 ; i < g[n].size() ; i++){
    if(!vis[g[n][i]]){
      Dfs(g[n][i]);
    }
  }
  Topsorted.push(n);
}

int main(){
  int node , edge   ,  x, y;
  cin>>node>>edge;
  for(int i = 0 ; i < edge ; i++){

    cin>> x>> y;
    g[x].push_back(y);
  }
  for(int i = 1 ; i <= node ; i++){
    if(!vis[i])
      Dfs(i);
  }

  while(!Topsorted.empty()){
    cout << Topsorted.top()<<" ";
    Topsorted.pop();
  }
  return 0;
}
