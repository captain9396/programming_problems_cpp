#include<bits/stdc++.h>
#define Long long long
#define MOD 497
using namespace std;

const int maxn = 200007;

Long dp[maxn];
bool vis[maxn];
int col[maxn] , par[maxn] , chi[maxn];
pair< int , int >crit;
bool cycle;

long long BigMod( int n ){
  if(n == 0) return 1;
  if(n == 1) return 4;
  //if(dp[n]) return dp[n];

  if(n%2){
    return ( (BigMod(n/2) % MOD) * ((BigMod((n/2)+1  ) % MOD)) ) % MOD;
  }
  else{
    return ( (BigMod(n/2 ) % MOD) * ((BigMod((n/2) ) % MOD)) ) % MOD;
  }
//  return dp[n];
}

int main(){
  cout << BigMod(13);
}
