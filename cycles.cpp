#include<bits/stdc++.h>
#define PB push_back
#define MAXN 5002
using namespace std;

bool vis[MAXN];
vector< int >par[MAXN] , cld[MAXN];
char foo[5005][5005];
set< int >::iterator it , jt;

int main(){
  int n ; cin >> n;
  for(int i = 1 ; i <= n ; i++){
    scanf("%s" ,foo[i-1]);
    for(int j = 1 ; j <= n; j++){
      if(foo[i-1][j-1] == '1'){
        par[j].PB(i);
        cld[i].PB(j);
      }
    }
  }
  int a , b , c;

  for(int i = 1 ; i <= n;  i++){
    for(int j = 0 ; j < par[i].size() ; j++){
      for(int k = 0 ; k < cld[i].size() ; k++){
        b = i - 1, a = par[i][j] - 1 , c = cld[i][k] - 1;
        if(foo[a][b] && (foo[a][b] == foo[b][c]) && (foo[b][c] == foo[][] ))
      }
    }
  }

  cout << -1;
  return 0;
}
