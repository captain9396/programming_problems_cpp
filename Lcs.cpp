#include<bits/stdc++.h>
using namespace std;

const int maxn = 100;
string s , t;

/// ABNCMDPE APOBBCQE

int dp[maxn][maxn];

int main(){
    cin >> s >> t;
    int l = s.length() , m = t.length();

    for(int i = 1; i <= m ; i++){
        for(int j = 1; j <= l ; j++){
            if(s[i] == t[j] ){
                dp[i][j] = dp[i-1][j-1] + 1 ;
            }
            else {
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }

        }

    }
    cout << dp[l][m] << endl;


    return 0;
}
