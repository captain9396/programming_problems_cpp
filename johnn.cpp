#include<bits/stdc++.h>
using namespace std;

const int N = 101010;
struct data{
  int u , w;
  bool operator< (const data& p)const{
    return w > p.w;
  }
};

vector<int>g[N] , cost[N];
int d[N];

int Dijkstra(int s , int e){
  memset(d , 1000000 , sizeof d);
  d[s] = 0;
  data A , B;
  A.u = s ; A.w = 0;
  priority_queue<data>q;
  q.push(A);
  while(!q.empty()){
    data T = q.top(); q.pop();
    for(int i  = 0 ; i < g[T.u].size() ; i++){
      if(d[g[T.u][i]]  > d[T.u] + cost[T.u][i]){
        d[g[T.u][i]]  = d[T.u] + cost[T.u][i];

        B.u = g[T.u][i] ,B.w= d[g[T.u][i]];
        q.push(B);
      }
    }
  }
  return d[e];
}

int main(){
  int node , edge , x , y , c;
  cin>>node>>edge;
  for(int i = 0 ;  i< edge  ; i++){
    cin>>x>>y>>c;
    g[x].push_back(y);
    g[y].push_back(x);
    cost[x].push_back(y);
    cost[y].push_back(x);
  }

  int query ; cin>>query;
  while(query--){
    cin>>x>>y;
    cout << Dijkstra(x,y) << endl;
  }
  return 0;
}
