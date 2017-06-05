#include<bits/stdc++.h>
using namespace std;

const int  N = 101010;

int A[N] , tree[3 * N];

void build(int node , int b , int e){
  if( b == e ){
    tree[node] = A[b]; return;
  }
  int left = node << 1  , right = (node << 1) + 1 , mid = (b + e) >> 1;
  build(left , b ,mid);
  build(right , mid + 1 , e);
  tree[node] = tree[left ] + tree[right];
}

int query(int node , int b , int e , int i , int  j){
  if(i > e || j < b) return 0;
  if(i <= b && j >= e) return tree[node];
  int left = node << 1  , right = (node << 1) + 1 , mid = (b + e) >> 1;
  return query(left , b , mid , i , j ) + query(right , mid + 1 , e ,  i , j);
}

void update(int node , int b , int e , int i , int x){
  if(i > e || i < b) return ;
  if(i >= b && i <= e)
  int left = node << 1  , right = (node << 1) + 1 , mid = (b + e) >> 1;
  update(left , b ,mid);
  update(right , mid + 1 , e);
  tree[node] = tree[left ] + tree[right];
}


int main(){
  int n ; cin >> n;

  for(int i = 0 ; i < n; i++) cin >> A[i + 1];

  build(1 , 1 , n);


}
