#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 100007;
ll a[N] , tree[N * 3];

ll poor;

void build(ll node, ll b, ll e){
    if(b == e){
        tree[node]=a[b];
        return;
    }
    build(node<<1, b, (b + e) >> 1);
    build((node<<1) + 1, 1 + ((b + e) >> 1) , e);
    tree[node] = tree[node<<1] + tree[(node<<1)+1];
}



void update(ll node, ll b, ll e, ll i, ll mon, ll ret){
    if(i > e || i < b) return ;
    if( b >=i && e<= i){
        if(ret == 1){
            poor = tree[node];
            tree[node]=0;
        }
        else{
            tree[node] += mon;
        }
        return;
    }
    update(node<<1, b, (b + e) >> 1, i, mon, ret);
    update((node<<1) + 1, 1 + ((b + e) >> 1) , e, i, mon, ret);
    tree[node] = tree[node<<1] + tree[(node<<1)+1];
}



ll query(ll node ,ll b, ll e , ll i , ll j){
    if(i > e || j < b) return 0;
    if( b >=i && e<= j){
        return tree[node];
    }
    ll p = query(node<<1, b, (b + e) >> 1, i,j);
    ll q = query((node<<1) + 1, 1 + ((b + e) >> 1) , e,i,j);
    return  p  + q;
}


int main(){
    ll tc , cnt = 0 , n , q , x, y , T;cin>>tc;
    while(tc--){
        printf("Case %I64d:\n" , ++cnt);
        scanf("%I64d%I64d", &n,&q);
        for(ll i=0 ; i<n; i++) scanf("%I64d" , &a[i+1]);
        build(1,1,n);
        while(q--){
            scanf("%I64d",&T);
            if(T==1){
                poor = 0;
                scanf("%I64d", &x);
                update(1,1,n,x+1,0,1);
                printf("%I64d\n", poor);
            }
            else if(T == 2){
                scanf("%I64d%I64d", &x, &y);
                update(1,1,n,x+1,y,2);
            }
            else{
                scanf("%I64d%I64d", &x, &y);
                printf("%I64d\n", query(1,1,n,x+1,y+1));
            }
        }
    }
    return 0;
}
