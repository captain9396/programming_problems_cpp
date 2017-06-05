#include<bits/stdc++.h>
#define left (node<<1)
#define right ((node<<1) + 1)
#define mid ((b + e) >> 1)
#define Long long long
using namespace std;

class Task{
  Long *A;
  Long *tree;
  Long *lazy_x;
  Long *lazy_inc;
public:
  Task(int n){
    A = (*Long)malloc((sizeof(Long)) * n);
    tree = (*Long)malloc((sizeof(Long)) * n * 3);
    lazy = (*Long)malloc((sizeof(Long)) * n * 3);
  }

  void bulid(int node , int b , int e){
    if(b == e){ tree[node] = A[b] * A[b] ; return ;}
    build(left , b , mid); build(right, mid + 1 , e);
    tree[node] = tree[left ] + tree[right];
  }

  void update_x(int node , int b , int e , int i , int j , int val){
    if(b > j || e < i) return;
    if(lazy_x[node]){
      tree[node] += (e - b + 1) * lazy_x[node] * lazy_x[node];
    }
  }
};

int main(){

}
