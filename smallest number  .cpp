#include<bits/stdc++.h>
using namespace std;

int init[100007] , goal[100007];

vector<int>g[100007];

int cnt[100007];
int mve;

void Dfs(int n  ,int state){
  vis[n] = true;
  for(int i = 0 ; i < g[n].size() ; i++){
    if(vis[g[n][i]] == false){
      if( init[g[n][i]] != goal[g[n][i]] ) Dfs(g[n][i] , 1);
    }
  }
  if(tic % 2)
}

int main(){
  int n ; cin>>n;
  for(int i = 0 ; i < n -  1 ; i++){
    scanf("%d%d" , &x,  &y);
    g[x].push_back(y);
    g[y].push_back(x);
  }

  for(int i = 0 ; i < n; i++) scanf("%d", &init[i +1]);
  for(int i = 0 ; i < n; i++) scanf("%d", &goal[i +1]);


}
