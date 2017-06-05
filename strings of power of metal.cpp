#include<bits/stdc++.h>
#define Long long long
using namespace std;

int dp[1000007];
queue<int> q;

Long ans;

int main(){
  string foo; cin>>foo;
  string a = "heavy";
  string b = "metal";

  for(int i = 0 ; foo[i] ; i++){
    if(foo[i] == 'h'){
      int j = i  , k = 0 , f = 1;
      for( ; a[j] ; j++, k++){
        if(foo[j] != a[k]){
          f = 0;
          break;
        }
      }
      if(f == 1){
        q.push(i);
      }
    }

    else if(foo[i] == 'm'){
      int j = i  , k = 0 , f = 1;
      for( ; b[j] ; j++, k++){
        if(foo[j] != b[k]){
          f = 0;
          break;
        }
      }
      if(f == 1){
        dp[i] = 1;
      }
    }
  }



  dp[1000007] = 0;

  for(int i = 1000006 ; i>=0 ;i--){
    dp[i] = dp[i] + dp[i + 1];
  }

  for(int i = 0 ; i< 50 ;i++){
    cout << dp[i] << " ";
  }
  cout << endl;

  while(!q.empty()){
    int T = q.front();
    q.pop();
    ans += (dp[T]);
    cout << T << " ";
  }
  cout << endl;
  cout << ans;

  return 0;
}
