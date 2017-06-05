#include<bits/stdc++.h>
using namespace std;

class Edge{
  public:
  int u , v , w;

  Edge(int a , int b , int c) { u = a ; v = b ; w = c;}
  bool operator < (const Edge& edge)const{
    w < edge.w;
  }
};

int par[101010];
vector < Edge > g ,answer;

int Find(int n) { return par[n] == n ? n : par[n] = Find(par[n]) ; }

int Kruskal(int n){
  for(int i = 0 ; i < n ; i++) par[i] = i;
  int s = 0  , t =  0;
  for(int i = 0 ; i < g.size() &&  t <= n-1; i++){
    int x = Find(g[i].u);
    int y = Find(g[i].v);
    if(x != y){
      par[x] = y;
      s += g[i].w;
      t++;
      answer.push_back(g[i]);
    }
  }
  return s;
}


int main(){
  int node , edge  , u , v , w;
  cin >> node >> edge ;

  for(int i = 0 ; i < edge ; i++){
    cin >> u >> v >> w;
    Edge newEdge(u , v , w);
    g.push_back(newEdge);
  }

  sort(g.begin() , g.end());

  cout << Kruskal(node) << endl;

  for(int i = 0 ; i < answer.size() ; i++)
    cout << "Edge " << i + 1 << " " << answer[i].u << "-----" << answer[i].v << "  : weight = " << answer[i].w <<endl;

  return 0;


}
