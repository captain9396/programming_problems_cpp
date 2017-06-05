#include<bits/stdc++.h>
using namespace std;

vector<int>H  , M;

int main(){
  string foo;
  cin>>foo;
  int len = foo.length();

  for(int i = 0 ; i < len - 4 ; i++){
    if(foo.substr(i , 5) == "heavy"){
      H.push_back(i);
    }
    else if(foo.substr(i , 5) == "metal"){
      M.push_back(i);
    }
  }

  for(int i = 0 ; i < H.size() ; i++) cout << H[i]<< " ";
  cout << endl;

  return 0;
}
