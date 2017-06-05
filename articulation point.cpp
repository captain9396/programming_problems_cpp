#include<bits/stdc++.h>
using namespace std;

const int N = 101010;

vector<int> g[N] , ArticulationPoints;
int d[N] , low[N]  , par[N] ,  timer;

void Dfs(int n){
  bool flag = false;
  int child = 0;
  d[n] = low[n] = ++timer;
  for(int i= 0; i < g[n].size() ; i++){
    if(!d[g[n][i]]){
      Dfs(g[n][i]);
      par[g[n][i]] = n;
      child++;
      low[n] = min(low[n],  low[g[n][i]]);
      if(d[n] <= low[g[n][i]]){
        flag = true;
      }
      else if(g[n][i] != par[n]){
        low[n] = min(low[n] , d[g[n][i]]);
      }
    }
  }

  if((n == 1 && child > 1) || (n != 1 && flag)){  /// node 1 is considered as the root node of the DFS tree
    ArticulationPoints.push_back(n);
  }
}

int main(){
  int node , edge ;cin>>node>>edge ;
  int x , y;
  for(int i = 0 ; i < edge ; i ++){
    cin>>x>>y;
    g[x].push_back(y);
    g[y].push_back(x);
  }

  Dfs(1);

  for(int i = 0 ; i < ArticulationPoints.size() ; i++)
    cout << ArticulationPoints[i]<< " ";
  return 0;
}
/*
    0 1
    1 2
    2 0
    1 3
    1 4
    1 6
    3 5
    4 5
*/
