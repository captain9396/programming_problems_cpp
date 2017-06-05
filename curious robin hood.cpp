#include<bits/stdc++.h>
#define _MAX 100000
using namespace std;
const int N = _MAX + 7;
int arr[N], tree[N * 3];

void build(int node, int b, int e){
    if( b==e ) {
        tree[node] = arr[b];
        return ;
    }
    int left = node<<1;
    int right = (node<<1) + 1;
    int mid = (b + e) >> 1;
    build(left,b,mid);
    build(right,mid+ 1, e);
    tree[node]=tree[left]+tree[right];
}

void Add(int node, int b, int e, int i , int val){
    if( i > e || i < b) return;
    if(b >= i && e<=i){
        tree[node] = val;
        return;
    }
    int left = node<<1;
    int right = (node<<1) + 1;
    int mid = (b + e) >> 1;
    Add(left,b,mid);
    Add(right,mid+ 1, e);
    tree[node]=tree[left]+tree[right];
}

int Find(int node, int b, int e, int i, int j){
    if(i > e || j < b) return 0;
    if(b >= i && )
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n , q;
        scanf("%d%d", &n,&q);
        for(int i =0; i<n; i++) scanf("%d", &arr[i]);
        build(1,0,n-1);
        while(q--){
            int a, i , j;
            scanf("%d", &a);
            if(a == 1){
                scanf("%d", &i);
                Clear(1,0,n-1,i);
            }
            else{
                if(a == 2){
                    scanf("%d%d" ,&i,&j);
                    Add(1,0,n-1,i,j);
                }
                else{
                    +
                }
            }
        }
    }
}
