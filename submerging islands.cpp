#include<bits/stdc++.h>
using namespace std;

const int N = 10005;

bool AP[N];
int d[N] , low[N] , timer  ,cnt;

void Init(){
  timer = cnt = 0 ;
  memset(d , 0 , sizeof d);
  memset(low , 0  , sizeof low);
  memset(AP , false , sizeof AP);
}

void Dfs(int u , vector<int>(&g)[N]){
  int child = 0;
  d[u] = low[u] = ++timer;
  for(int i = 0 ; i < g[u].size() ; i++){
    int v = g[u][i];
    if(!d[v]){
      child++;
      Dfs(v , g);
      low[u] = min(low[u] , low[v]);
      if((u == 1 && child > 1) || (u != 1 && d[u] <= low[v])){
        AP[u] = true;
      }
    }
    else{
      low[u] = min(low[u] , d[v]);
    }
  }
}

int main(){
  int n, m  ;
  int x ,y;
  scanf("%d%d" , &n, &m);
  while(1){
    Init();

    vector<int>g[N];
    for(int i = 0 ; i < m; i++){
      scanf("%d%d" , &x , &y);
      g[x].push_back(y);
      g[y].push_back(x);
    }

    Dfs(1 , g);

    for(int i = 1 ; i<= n; i++){
      if(AP[i]) cnt++;
    }
    printf("%d\n" , cnt);
    scanf("%d%d" , &n , &m);
    if(n == 0 && m == 0) break;

}
return 0;
}
