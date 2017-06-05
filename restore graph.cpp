#include<bits/stdc++.h>
#define Long long long
using namespace std;
const int maxn = 100007;

map<int , vector<int> > nodes , weight;

int d[maxn];
Long power(Long x , Long n){
  Long t = 1; while(n--) t *= x;
  return t;
}

int main(){
  ios_base::sync_with_stdio(0) ; cin.tie(0); cout.tie(0);
  int n , k ; cin >> n >> k;

  for(int i = 0 ; i < n ; i++){
    cin >> d[i];
    nodes[d[i]-1].push_back(i + 1);
    weight[d[i]].push_back(i + 1);
  }

  sort(d  , d + n);
  for(int i = 1 ; i < n ; i++){
      if(d[i] - d[i-1] > 1){
        cout << -1;
        return 0;
      }
  }

  if(weight[0].size() != 1){
    cout << -1  ; return 0;
  }

  vector< pair<int,int> > answer;

  int po = 0;
  for(map<int , vector<int> >::iterator it = weight.begin()  ; it!= weight.end() ; it++ , po++){
    int mark = 0;
    for(int i = 0 ; i < weight[po].size() ; i++){
      int t;
      int limit = k - 1;
      if(po == 0 ) limit = k;
      for(int j = mark , t = 0 ; t < limit && j < nodes[po].size() ; j++ , mark++ , t++){
        answer.push_back(make_pair(weight[po][i] , nodes[po][mark]));
      }
    }
//    cout << mark << ' ' << nodes[po].size() <<  endl;
    if(mark < nodes[po].size()){

      cout << -1 ; return 0;
    }
  }
  cout << answer.size()<<endl;
  for(int i = 0 ; i < answer.size() ; i++){
    cout << answer[i].first << ' '<< answer[i].second << '\n';
  }
}
