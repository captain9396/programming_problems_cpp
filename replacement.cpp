#include<bits/stdc++.h>
using namespace std;

const int N = 300007;

string foo;

int tree[N * 3];

void build(int node , int b, int e){
  if(b == e){
    if(foo[b] == '.') tree[node] = 1;
    return ;
  }
  int left = node << 1;
  int right = (node<<1) + 1;
  int mid = (b+e) >> 1;
  build(left , b , mid);
  build(right, mid+1, e);
  tree[node] = tree[left] + tree[right];
}

int query(int node , int b, int e){
  if(b == e) return 0;
  if(tree[node] == (e - b + 1)) return (tree[node] >= 2) ? tree[node] - 1 : 0 ;
  int left = node<<1;
  int right = (node<<1) + 1;
  int mid = (b + e) >> 1;
  int p = query(left , b , mid);
  int q = query(right, mid + 1, e);

  cout <<"node no : "<< node << " p : "<< p<<" q :" <<q <<"range : ("<<b<<","<<e<<")" << endl;
  return p + q;
}

int main(){
  int n , m ; cin>>n>>m;
  cin>>foo;
  build(1 , 0 , n-1);
  for(int i = 0 ; i < 20 ; i++) cout << tree[i]<< " ";
  cout << endl;
  cout << query(1, 0 , n-1);
  return 0;
}
