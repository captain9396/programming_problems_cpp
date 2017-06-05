#include<bits/stdc++.h>
using namespace std;

string str;
vector< char > answer;

void recur(int pos){
  if(pos == str.length()) return;
  if(str[pos] == '[') recur(pos+1);
  else if (str[pos] == ']') return;
  else {
      answer.push_back(str[pos]);
      recur(pos +1);
  }
}

int main(){
  cin >> str;
  recur(0);
  for(int i = 0 ; i < answer.size(); i++) cout << answer[i];

  return 0;
}
