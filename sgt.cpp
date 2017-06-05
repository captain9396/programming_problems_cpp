#include<bits/stdc++.h>
using namespace std;
const int N  = 100000;

int a[N] , tree[N * 3];

void build(int node, int b , int e){
    if(b == e){
        tree[node] = a[b];
        return ;
    }
    int left = node << 1;
    int right = (node<<1) + 1;
    int mid =(b + e) >> 1;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=tree[left]+tree[right];
}

int query(int node, int b , int e, int i , int j){
    if(i > e || j < b) return 0;
    if(b>=i && e<=j) return tree[node];
    int left = node << 1;
    int right = (node<<1) + 1;
    int mid = (b + e) >>1;
    int p = query(left,b,mid,i,j);
    int q = query(right,mid+1, e, i , j);
    return p  + q;
}

void update(int node, int b, int e, int i , int val){
    if(i > e || i< b) return;
    if(b >= i && e<=i){
        tree[node] = val;
        return;
    }
    int left = node<<1;
    int right = (node<<1) + 1;
    int mid = (b + e) >>1;
    update(left,b,mid,i,val);
    update(right,mid + 1, e, i , val);
    tree[node]=tree[left]+tree[right];
}

int main(){
    int n ; cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i+1];
    }
    build(1,1,n);
    int s, t;
    char ch;
    while(cin>>ch >> s >>t){
        if(ch == 'q')cout<<query(1,1,n,s,t) ;
        else update(1,1,n,s,t);
    }
}
