#include<bits/stdc++.h>
using namespace std;

const int N = 3007;

short int par[3000][3000];

vector<int> g[N];
map<pii , int>par;

void dfs(int node , int u ){
  for(int v : g[u]){

    if(par[node][v] == 0){
      par[node][v] = u;
      dfs(node , v );
    }
    else{

      if(par[par[v]] != 0 && par[par[v]] != -1){
        mark[pii(par[par[v]] , v)] += 1;
       }
    }
  }
}

int main(){

}
