#include<bits/stdc++.h>

using namespace std;

int A[15] , ans[15] , vis[15];

void func(int pos , int n , int k){
  if(pos == k + 1){
    return 1
  }
  for(int i = 1; i <= n; i++){
    if(pos == 1){
      ans[pos] = A[i];
      func(pos + 1 , n , k);
    }
    else if(pos>1 &&  abs(ans[pos-1] - A[i]) <= 2){
      ans[pos] = A[i];
      func(pos + 1 , n , k);
    }
  }
}

int main(){
  int n  , k;
  cin >> n >> k;
  for(int i = 1; i <= n; i++) cin >> A[i];
  func(1 , n , k);
}
