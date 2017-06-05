#include<bits/stdc++.h>
#define left ((node << 1))
#define right ((node << 1) + 1)
#define mid ((b + e) >> 1)
using namespace std;
const int maxn = 100007;

int A[maxn] , tree[3 * maxn] , lazy[3 * maxn];

void build(int node ,int b , int e){
  if(b == e) { tree[node] = A[b] ; return;}
  build(left , b , mid);
  build(right, mid+ 1 , e);
  tree[node] = tree[left] + tree[right];
}

void update(int node , int b ,int e , int i , int j , int val){
  if(b > j || e  < i ) return;
  if(lazy[node]){
    tree[node] += (e - b + 1 ) * lazy[node];
    if(b != e){
      lazy[left] += lazy[node];
      lazy[right] += lazy[node];
    }
    lazy[node] = 0;
  }
  if(b >= i && e <= j){
    tree[node] += (e - b + 1) * val;
    if(b != e){
      lazy[left] += val;
      lazy[right] += val;
    }
    return;
  }
  update(left , b , mid , i , j , val);
  update(right , mid + 1 , e , i , j , val);
  tree[node ] = tree[left] + tree[right];
}

int query(int node , int b , int e , int i , int j){
  if(b > j || e  < i ) return 0;
  if(lazy[node]){
    tree[node] += (e - b + 1 ) * lazy[node];
    if(b != e){
      lazy[left] += lazy[node];
      lazy[right] += lazy[node];
    }
    lazy[node] = 0;
  }
  if(b >= i && e <= j) return tree[node];
  return query(left , b , mid , i , j)  +  query(right , mid + 1 , e  , i , j);
}

int main(){
  int n ; cin >> n;
  for(int i = 0  ; i < n ; i++) cin >> A[i + 1];
  build(1 , 1 , n);

  update(1 , 1 ,n ,1 , 3,  10);
  cout << query(1 , 1 , n , 1 , n ) << endl;
  update(1 ,1 , n ,  4 ,5 , 7 );
  cout << query(1 , 1 , n , 3 ,4) << endl;
  update(1 , 1 , n , 2 , 2 , 13);
  cout << query(1 ,1 ,n , 1 , n);
}
