#include<bits/stdc++.h>
#define MIN(A,B) ((A < B) ? (A) : (B))
using namespace std;
typedef long long ll;
const int N =100000 + 7;
ll a[N] , tree[3 * N ];

void build(ll node, ll b, ll e){
    if(b == e) tree[node] = a[b];
    else{
        ll left = (node << 1);
        ll right = (node<<1)+1;
        ll mid = (b + e) >>1;
        build(left,b, mid);
        build(right,mid + 1, e);
        tree[node] = MIN(tree[left],tree[right]);
    }
}

ll query(ll node, ll b, ll e, ll i , ll j){
    if(i > e || j < b) return 10000000;
    if(b >= i && e <= j ) return tree[node];
    ll left = (node<<1);
    ll right = (node<<1)+1;
    ll mid = (b + e)>>1;
    ll p = query(left,b,mid,i,j);
    ll q = query(right,mid +1, e,i,j);
    return MIN(p,q);
}

void update(ll node, ll b, ll e, ll i , ll val){
    if(i > e || i < b) return;
    if(b>=i && e<=i){
        tree[node]=val;
        return;
    }
    ll left = node<<1;
    ll right = (node << 1) + 1;
    ll mid = (b + e)>>1;
    update(left,b,mid,i,val);
    update(right,mid+1,e,i,val);
    tree[node] = MIN(tree[left],tree[right]);
}


int main(){
    ll tc, cs = 0, n ,q;
    cin>>tc;

    while(tc--){
        getchar();
        scanf("%I64d%I64d" , &n, &q);
        printf("Case %I64d:\n", ++cs);
        for(ll i =1; i<=n; i++)scanf("%I64d",&a[i]);
        build(1,1,n);
        ll i , j;

        while(q--){
            scanf("%I64d%I64d", &i,&j);
            printf("%I64d\n", query(1,1,n,i,j));
        }
    }
    return 0;
}
