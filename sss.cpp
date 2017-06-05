#include<bits/stdc++.h>

using namespace std;

vector <int> cost , weight;
int dp[100][100];


int func(int pos,int weightLeft , int n){
  if(weightLeft< 0 || pos == n) return 0;
  if(dp[pos][weightLeft] != -1 ) return dp[pos][weightLeft];

  int A , B;
  A = B = 0;
  A = cost[pos] + func(pos + 1 , weightLeft - weight[pos] , n);
  B = func(pos + 1 , weightLeft  , n);
  return dp[pos][weightLeft] = max(A , B);
}

int main(){
  int n ; cin >> n;
  int cos , wgt , capacity;
  memset(dp , -1 , sizeof dp);
  for(int i = 0  ; i < n;  i++){
    cin >> cos >> wgt;
    cost.push_back(cos);
    weight.push_back(wgt);
  }

  cin >> capacity;

  cout << (0 , capacity , 0);

  return 0;

}
