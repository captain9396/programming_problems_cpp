#include<bits/stdc++.h>
#define Long long long
using namespace std;

Long a[200007];
Long s;

int main(){
  int n , t , c; cin>>n>>t>>c;
  for(int i = 0 ; i < n; i++) scanf("%I64d" , &a[i]);

  for(int i = 0 ; i < n ; ){
    if(a[i] <= t){
      int k = i , cnt = 0;
      while(a[k] <= t && k < n){
        k++;
        cnt++;
      }
      if(cnt >= c) s += (cnt - c + 1);
      i = k;
    }
    else i++;
  }
  cout << s;
}
