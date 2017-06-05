#include<bits/stdc++.h>
#define max(a , b) (((a) > (b)) ? (a):(b))
#define _max(a , b, c, d) max(max(a , b) , max(c , d))
#define Long long long
using namespace std;

const int maxn = 3007;

Long dp[maxn][3][3];
Long A[maxn] , B[maxn] , C[maxn];

Long func(int i , int prev , int cur , int n){
    if(i == n + 1 ) return 0;
    if(dp[i][prev][cur] != -1){
        return dp[i][prev][cur];
    }
    Long a, b, c, d;
    a = b = c = d = 0;
    if(prev == 0){
        if(i == n ) return A[i];
        a = A[i] + func(i + 1 , cur , 0 , n);
        b = B[i] + func(i + 1, cur , 1 , n);
    }
    else if( prev == 1 ){
        if(i == n) return B[i];
        c = B[i] + func(i + 1 , cur , 0 , n);
        if(i != 1) d = C[i] + func(i + 1 , cur , 1 , n);
    }
    return dp[i][prev][cur] = _max(a , b , c, d);
}

int main(){
    memset(dp , -1 , sizeof dp);
    int n ;
    cin >> n;
    for(int i = 1; i <=n ; i++) scanf("%I64d" , &A[i]);
    for(int i = 1; i <=n ; i++) scanf("%I64d" , &B[i]);
    for(int i = 1; i <=n ; i++) scanf("%I64d" , &C[i]);


    cout << func(0 , 0 , 0 , n) << ' ' << func(0 , 0 , 1, n);
    return 0;
}






