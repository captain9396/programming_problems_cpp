#include<bits/stdc++.h>
#define INF (1LL<<40)
using namespace std;
typedef long long ll;
ll n, a, b, c;
ll dp[10000];
ll solve(ll x){
    if(x==0) return 0;
    if(x < 0 ) return -1000000;
    if(dp[x] != -1) return dp[x];
    int num1 = 0, num2 = 0, num3 = 0;
    num1 = 1 + solve(x - a);
    num2 = 1 + solve(x - b);
    num3 = 1 + solve(x - c);
    /cout<<num1<<' '<<num2<<' '<<num3<<endl;
    dp[x] = max(max(num1,num2), num3);
    return dp[x];
}

int main(){
    memset(dp, -1, sizeof dp);
    cin>>n>>a>>b>>c;
    cout<<solve(n);
    return 0;
}
