#include<bits/stdc++.h>
using namespace std;
int main(){
  multimap<int,int>m;
  pair<int,int>T(1,3);
  m.insert(T);

  m.insert(pair<int,int>(6,4));
  m.insert(pair<int,int>(4,4));
  m.insert(pair<int,int>(7,4));
  m.insert(pair<int,int>(1,4));

  for(multimap<int,int>::iterator it = m.begin() ; it != m.end() ; it++){
    cout << it->first<<" "<<it->second<<endl;
  }
  cout <<endl<<endl;

  multimap<int,int>::iterator i = m.find(1);
  for( ; i->first == 1 ; i++){
    cout << i->first<<" "<<i->second<<endl;
  }
  return 0;
}
