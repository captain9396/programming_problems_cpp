#include<bits/stdc++.h>
using namespace std;

int main(){
  int t , n; cin >> t;
  for(int i= 0 ; i < t ; i++){
    cin >> n;
    for(int i = 0 ; i <= n; i++) printf("%d " , i);
    if(i != t - 1)puts("");

  }
}
