#include<bits/stdc++.h>
#define Long long long
#define PLL pair<long long , long long>
using namespace std;

map<Long , Long>foo;
vector<PLL>bar;
Long a[100007] , b[100007];

bool comp(PLL a , PLL b){
  return a.second > b.second;
}

Long cnt;

int main(){

  int n ; cin>>n;


  for(int i = 0 ; i < n; i++){
    scanf("%I64d%I64d" , &a[i] , &b[i]);
    if(a[i] == b[i]){
      foo[a[i]]++;
    }
    else {
      foo[a[i]]++;
      foo[b[i]]++;
    }
  }

  for(map<Long , Long> :: iterator i = foo.begin() ; i!=foo.end() ; i++){
    bar.push_back(PLL(i->first , i->second));
  }

  sort(bar.begin() , bar.end() , comp);

  if(bar[0].second < n / 2) cout << -1;


  else{
    Long x = bar[0].first;
    for(int i = 0 ; i < n ; i++){
      if(a[i] != x && b[i] == x ) cnt++;
    }
  }
  cout << cnt;

}
