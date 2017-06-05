#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>foo;
  int n  , t ; cin>>n;

  for(int i = 0 ; i < n ; i++){
    scanf("%d" , &t);
    foo.push_back(t);
  }

  sort(foo.begin() , foo.end());
  if(binary_search(foo.begin() , foo.end() , 5)) cout << "yes";
  return 0;
}
