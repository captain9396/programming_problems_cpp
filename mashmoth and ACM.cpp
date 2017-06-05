#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;

const int maxn = 2001;

long long dp[maxn][maxn];

int main(){
    int n  , k ;
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++) dp[k][i] = 1;
    for(int i = k - 1  ; i >= 1 ; i--){
        for(int j = 1 ; j <= n ; j++){
            for(int m = j ; m <= n ; m+= j){
                dp[i][j] += dp[i+1][m];
                dp[i][j] %= MOD;
            }
        }
    }
    long long ans = 0;
    for(int i = 1 ; i <= n ; i++){
        ans += dp[1][i];
        ans%= MOD;
    }
    cout << ans;
    return 0;
}
