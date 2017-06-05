#include<bits/stdc++.h>
#define PLL pair<long long , long long>
#define Long long long

using namespace std ;

map<Long , Long>buy , sell;
vector<PLL>ss ,bb;
stack<PLL>foo;

bool comp(PLL A , PLL B){ return A.first > B.first;}

bool comp2(PLL A , PLL B){ return A.first < B.first;}

int main(){

  int n , s , p  ,v; cin>>n>>s;
  char c ;

  for(int i = 0 ; i < n ; i++){
    scanf(" %c %d%d",  &c , &p , &v);

    if(c == 'B') buy[p] += v;
    else sell[p] += v;
  }

  for(map<Long, Long>::iterator it = sell.begin();  it!= sell.end() ; it++){
    ss.push_back(PLL(it->first , it->second));
  }

  for(map<Long, Long>::iterator it = buy.begin();  it!= buy.end() ; it++){
    bb.push_back(PLL(it->first , it->second));
  }

  if(ss.size() > 1) sort(ss.begin() , ss.end() , comp2);
  if(bb.size() > 1)sort(bb.begin() , bb.end() , comp);

  for(int i = 0 ; i< s && i < ss.size()  ; i++) foo.push(ss[i]);

  PLL T;
  for(int i = 0; !foo.empty(); i++){
    T = foo.top();
    printf("S %I64d %I64d\n" , T.first , T.second);
    foo.pop();
  }

  for(int i = 0; i < s && i < bb.size(); i++)
    printf("B %I64d %I64d\n" , bb[i].first , bb[i].second);

    return 0;

}
