#include<bits/stdc++.h>
using namespace std;

const int N = 700;

struct Problem{

  Problem(){
    timer = 0;
    memset(d, 0 , sizeof d);
    memset(low, 0 , sizeof low);
    memset(par, -1 , sizeof par);
  }

  void AddEdge(int u , int v){
    g[u].push_back(v);
    g[v].push_back(u);
  }


  void dfs(int u){
    d[u] = low[u] = ++timer;
    for(int i = 0 ; i < g[u].size() ; i++){
      int v = g[u][i];
      par[v] = u;
      if(!d[v]){
        dfs(v);
        low[u] = min(low[u] , low[v]);
        if(d[u] < low[v]){
          data A(min(u , v) ,max(u , v));
          q.push_back(A);
        }
      }
      else if(par[u] != v){
        low[u] = min(low[u] , d[v]);
      }
    }
  }

  void Solution(){

    dfs(1);

    if(q.empty()) puts("Sin bloqueos");
    else{
      printf("%d\n" , q.size());
      sort(q.begin() , q.end());
			for(int i = 0 ; i < q.size() ; i++){
				printf("%d %d\n" , q[i].u , q[i].v );

			}
    }
  }

private :
   struct data{
    int u , v;
    data(int u , int v) : u(u) , v(v) {}
    bool operator<(const data& p)const{
      if(u == p.u){
        return v < p.v;
      }else return u < p.u;
    }
  };


  int d[N] , low[N] , par[N] , timer;
  vector<int>g[N] ;
  vector<data>q;

};


int main(){
	int nc , n , m  , u , v; cin>>nc;
	int cases = 0;
	while(nc--)	{
		getchar();

		Problem prob;
		scanf("%d%d" , &n , &m);
		for(int i = 0 ; i < m ; i++){
			scanf("%d%d" , &u , &v);
			prob.AddEdge(u , v);
		}


    prob.Solution();
	}


	return 0;
}
