#include<bits/stdc++.h>
using namespace std;

map< long long , long long> parent;
bool found;

bool dfs(int u ,int high , int par){
  parent[u] = par;
  if(u > high) return 0;
  if(u == high) return 1;
  return dp[u] = dfs(2 * u , high,  u) | dfs((10* u) + 1 , high , u);
}

vector< int > vec;

void print(int u){
  if(parent[u] != -1) print(parent[u]);
  vec.push_back(u);
}

int main(){
  long long a , b;
  ios_base::sync_with_stdio(0) ; cin.tie(0); cout.tie(0);
  cin >> a >> b;
  dfs(a , b , -1);

  if(found){
    cout << "YES\n";
    print(b);
    cout << vec.size() << endl;
    for(int i = 0 ; i < vec.size(); i++) cout << vec[i] << ' ' ;
  }else{
    cout << "NO" ;
  }
   return 0;
}
