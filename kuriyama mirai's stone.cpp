#include<bits/stdc++.h>
#define Long long long
using namespace std;

const Long N = 100007;

Long a[N] ,tree[N * 3] , tree2[N * 3];

void build(Long node , Long b, Long e){
    if( b == e ){
        tree[node] = a[b];
        return;
    }
    Long left = node << 1;
    Long right = (node << 1)+1;
    Long mid = (b + e) >> 1;
    build(left , b , mid);
    build(right , mid + 1 , e);
    tree[node] = tree[left] + tree[right];
}

void build2(Long node , Long b, Long e){
    if( b == e ){
        tree2[node] = a[b];
        return;
    }
    Long left = node << 1;
    Long right = (node << 1)+1;
    Long mid = (b + e) >> 1;
    build2(left , b , mid);
    build2(right , mid + 1 , e);
    tree2[node] = tree2[left] + tree2[right];
}

Long query(Long node , Long b, Long e , Long i , Long j){
    if(i > e || j < b) return 0;
    if(b >= i && e <= j) return tree[node];
    Long left = node << 1;
    Long right = (node<<1) + 1;
    Long mid = (b + e) >> 1;
    Long p = query(left , b , mid , i , j);
    Long q = query(right ,1 + mid ,e, i , j);
    return p + q;
}

Long query2(Long node , Long b, Long e , Long i , Long j){
    if(i > e || j < b) return 0;
    if(b >= i && e <= j) return tree2[node];
    Long left = node << 1;
    Long right = (node<<1) + 1;
    Long mid = (b + e) >> 1;
    Long p = query2(left , b , mid , i , j);
    Long q = query2(right ,1 + mid ,e, i , j);
    return p + q;
}

int main(){
    Long n ; cin>>n;
    for(Long i = 1 ; i <= n ; i++) scanf("%I64d" , &a[i]);

    build(1,1,n);

    sort(a + 1, a + n + 1);

    build2(1,1,n);

    Long x, p ,  q;

    Long m ; cin>>m;

    while(m--){
        scanf("%I64d%I64d%I64d" , &x,&p,&q);
        if(x == 1) printf("%I64d\n" , query(1,1,n,p,q));
        else printf("%I64d\n" , query2(1,1,n,p,q));
    }

    return 0;
}
