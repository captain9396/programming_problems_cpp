#include<bits/stdc++.h>
#define Long long long
using namespace std;

map<Long , set<int> >foo;
map<Long , int>bar;



int main(){
  int n , k  ; cin>>n>>k;

  for(int i = 0 ; i < n ; i++){
    scanf("%I64d" , &a[i]);
    foo[a[i]].insert(i);
    bar[a[i]]++;
  }

  for(int i = 0 ; i < n ;i++){
    foo[a[i]]--;

  }
}
