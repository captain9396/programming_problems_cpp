#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

const int N = 101010;

vector<int>g[N] , ans;
bool vis[N];



void Dfs(int n){
  vis[n] = true;
  for(int i = 0 ; i < g[n].size(); i++){
    if(vis[g[n][i]] == false){
      Dfs(g[n][i]);
    }
  }
  ans.push_back(n);
}


int main(){
  int node , edge  , x , y;

  while(scanf("%d%d" , &node , &edge) && node){

    for(int i = 0 ; i < edge  ; i++){
      cin>>x>>y;
      g[x].push_back(y);

    }

    for(int i =1 ; i<=node; i++){
      if(vis[i] == false)
        Dfs(i);
    }

    reverse(ans.begin() , ans.end());

    for(int i = 0;  i<ans.size() ; i++ ){
      if(i < ans.size() - 1)
        cout << ans[i] << " ";
      else cout << ans[i] <<'\n';
    }

  }
return 0;
}
