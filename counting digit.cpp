#include<bits/stdc++.h>
using namespace std;

int A[12];
int dp[11][11];

int func(int pos , int digit , int n , int k ){
  if(pos == k) return 1;
  if( dp[pos][digit] != -1 ) dp[pos][digit];
  dp[pos][digit] = 0;
  cout << pos << ' ' << digit << endl;
  for(int i = 0 ; i < n; i++){
    if(abs(digit - A[i]) <= 2){
      dp[pos][digit] += func(pos + 1 , A[i] , n , k);
    }
  }
  return dp[pos][digit];
}


int main(){
  int m , k ;
  memset(dp , -1 , sizeof dp);
  cin >> m >> k;
  for(int i = 0 ; i < m ; i++) cin >> A[i];
  int ans =  0;
  for(int i = 0 ; i < m ; i++) ans += func(0 , A[i] , m , k);

  cout << ans ;

  return 0;
}
