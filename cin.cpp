#include<bits/stdc++.h>
using namespace std;

/// permutation

char  A[] = {'1' , '2' , '3'};
bool vis[5];
vector< char > ans;

void Permute(){

  if(ans.size() == 3){
    for(int i = 0 ; i < ans.size() ; i++) cout << ans[i];
    puts("");
    return;
  }

  for(int i = 0 ; i < 3 ; i++){

      ans.push_back(A[i]);
      Permute();
      ans.pop_back();

  }
}

int main(){
  Permute();

  return 0;
}
