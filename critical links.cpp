#include<bits/stdc++.h>
using namespace std;

const int N = 10005;

struct data{
  int a , b;
  data(int a , int b) : a(a) , b(b) {}
  bool operator<(const data& p)const{
    if(a == p.a)
    else{

    }
  }
};

int d[N] , low[N] , par[N];

void Dfs(int u , vector<int>(&g)[10005] ,
         priority_queue<data>& foo){
  d[u] = low[u] = ++timer;
  for(int i = 0 ; i < g[u].size() ; i++){
    int v = g[u][i];
    if(!d[v]){
      par[v] = u;
      Dfs(v , g , foo);
      low[u] = min(low[u] , low[v]);
      if(d[u] < low[v]){
        int x = min(u , v);
        int y = max(u , v);
        foo.push(make_pair(x , y));
      }
    }
  }
}

int main(){
  int test; cin>>test;
  int cases = 0;
  int u , v , n , adj;
  while(test--){
    getchar();
    scanf("%d" , &n);
    vector<int>g[10005];
    for(int i = 0 ; i < n ; i++){
      scanf("%d" , &u);
      getchar();
      scanf("%d" , &adj);
      getchar();
      for(int j = 0 ; j < adj ; j++){
        scanf("%d" , &v);
        g[u].push_back(v);
      }
    }


  }
}
