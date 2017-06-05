#include<bits/stdc++.h>
#define left (node<<1)
#define right ((node<<1)+1)
#define mid ((b+e) >> 1)
using namespace std;
const int maxn = 100007;

class SegmentTree{
  int *a;
  int *tree;
  int *lazy;
public:
  SegmentTree(int n){
    a = new int[n+7];
    tree = new int[(3*n)+7];
    lazy = new int[(3*n)+7];
  }

  void build(int node , int b , int e){
    if(b == e){tree[node ] = a[b];  return ;}
    build(left , b , mid); build(right , mid+1 , e);
    tree[node] = tree[left] + tree[right];
  }

  void update(int node , int b , int e , int i , int j , int val){
    if(b > j || e < i) return;
    if(lazy[node]){
      tree[node] += (e - b+ 1) * lazy[node];
      if(b != e){
        lazy[left] += lazy[node];
        lazy[right] += lazy[node];
      }
      lazy[node] = 0;
    }
    if(b >= i && e <= j){
      tree[node] += (e - b+ 1) * val;
      if(b != e){
        lazy[left] += val;
        lazy[right] += val;
      }
      return;
    }
    update(left , b, mid) ; update(right , mid + 1 , e);
    tree[node] = tree[left] + tree[right];
  }

  int Query(int node , int b , int e , int i , int j){
        if(b > j || e < i) return 0;
        int left = (node << 1)  , right= (node << 1) + 1 , mid = (b + e ) >> 1;
        if(lazy[node] != 0){
            tree[node] += ((e - b + 1) * lazy[node]);
            if(b != e){
                lazy[left] += lazy[node];
                lazy[right] += lazy[node];
            }
            lazy[node] = 0;
        }
        if(b >= i && e <= j) return tree[node];
        return Query(left, b, mid, i, j) + Query(right, mid+ 1, e, i, j) ;
    }
};




int main(){
  int n ;
  cin >> n;
  for(int i = 0 ; i <  n   ; i++) cin>> a[i];
}
