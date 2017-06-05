#include<bits/stdc++.h>
using namespace std;

bool is[101001];
void sieve(){
  is[0] = is[1] = true;
  for(int i = 4; i <= 100005; i+=2) is[i] = true;
  for(int i = 3; i <= sqrt(100005);  i+=2){
    if(is[i] == false){
        for(int j = i * i; j <= 100005 ; j+= (i * 2)){
          is[j] = true;
        }
    }
  }
}

int main(){
  int n  ; cin>>n;
  sieve();

  for(int i = 2 ; i <= n ; i++){
    if(is[i] == false) cout << i << " ";
  }
  return 0;
}
