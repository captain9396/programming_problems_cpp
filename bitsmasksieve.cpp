#include<bits/stdc++.h>
using namespace std;
int is[100000 / 32];

bool check(int n , int pos){ return (bool)(n & (1 << pos));}
int Set(int n , int pos){return n = (n | (1 << pos));}

int main(){
  int n ; cin>>n;

  Sieve(n);
  cout << 2 << " ";
  for(int i = 3 ; i<= n ; i+=2){
    if(check(is[i >> 5] , i & 31) == false){
      cout << i << " ";
    }
  }
}
