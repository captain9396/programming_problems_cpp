#include<bits/stdc++.h>
using namespace std;

const int N = 101010;

vector<int>g[N] , cost[N];
int d[N];

struct node{
  int u , w;
  node(int u , int w) : u(u) , w(w) { }
  bool operator< (const node& p)  const{
  return w > p.w;}
};

int Dijkstra(int s , int e){
  memset(d , 1000000 , sizeof d);
  d[s] = 0 ;
  node A(s , 0);
  priority_queue<node>q;
  q.push(A);
  while(!q.empty()){
    node T = q.top();
    q.pop();
    for(int i = 0 ; i < g[T.u].size() ; i++){
      if(d[g[T.u][i]] > d[T.u] + cost[T.u][i]){
        d[g[T.u][i]] = d[T.u] + cost[T.u][i];
        node B(g[T.u][i] , d[g[T.u][i]]);
        q.push(B);
      }
    }
  }
  return d[e];
}

int main(){
  int node , edge , x , y  ,c;
  cin>>node>>edge ;
  for(int i = 0 ; i < edge ; i++){
    cin>>x>>y >> c;
    g[x].push_back(y);
    g[y].push_back(x);
    cost[x].push_back(c);
    cost[y].push_back(c);
  }

  int query; cin>>query;
  while(query--){
    cin>>x>>y;
    cout << Dijkstra(x , y) << endl;
  }
  return 0;
}
