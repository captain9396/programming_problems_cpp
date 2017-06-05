#include<bits/stdc++.h>
using namespace std;
long long dp[10007];
long long a, b, c, d, e, f;
long long fn( long long n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n]!=-1) return dp[n];
    else {
        dp[n] =  fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) ;
    }
    return dp[n];
}
int main() {
    for(long long i=0; i<=10005; i++) dp[i] = -1;
    long long n, caseno = 0, cases;
    scanf("%I64d", &cases);
    while( cases-- ) {
        scanf("%I64d %I64d %I64d %I64d %I64d %I64d %I64d", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %I64d: %I64d\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
