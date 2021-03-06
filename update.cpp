#include<bits/stdc++.h>
using namespace std;
const int N =100000;
int a[N] , tree[3 * N];

void build(int node, int x, int y){
    if(x == y) tree[node] = a[x];
    else{
        int left = node<<1;
        int right = (node<<1) + 1;
        int mid = (x + y) >>1;
        build(left,x,mid);
        build(right,mid+1,y);
        tree[node]=tree[left]+tree[right];
    }
}

int query(int node , int x, int y , int i , int j){
    if(i > x || j < y) return 0;
    if(x>=i && y<=j)return tree[node];
    int left = node<<1;
    int right = (node<<1)+1;
    int mid = (x+y)>>1;
    int a = query(left,x,mid,i,j);
    int b = query(right,mid+1,y,i,j);
    return a + b;
}

//void update(int node, int x, int y, int i, int value){



int main(){
    int n; cin>>n;
    for(int i =1 ; i<=n ;i++) scanf("%d", &a[i]);
    build(1,1,n);
    int s = 1, t;
    while(s!=0){
        cin>>s>>t;
        cout<<query(1,1,n,s,t)<<endl;
    }
    return 0;

}
