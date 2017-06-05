#include<bits/stdc++.h>
using namespace std;
int dp[10000];
int n , m;

int go(int x){
    if(x == m) return 0;
    if( x < 0 || x > 10000) return 100000;
    if(dp[x] != -1) return dp[x];
    int a = 1000000 , b = 1000000;
    if(x - 1 != n) a = 1 + go(x - 1);
    if( 2*x != n) b = 1 + go(2 * x);
    return  dp[x] = min(a, b);
}

int main(){
    memset(dp, -1, sizeof dp);
    cin>>n>>m;
    cout<<go(n);
    return 0;
}
