#include<bits/stdc++.h>
#define MOD 1000000007
#define Long long long
using namespace std;

const int maxn = 105;
Long dp[maxn][maxn][2];

Long func(int i , int tak , int n , int k , int d , bool mark){
    if(tak == n) return mark ? 1 : 0;
    if(tak > n) return 0;
    if(dp[i][tak][mark]!= -1) return dp[i][tak][mark];
    Long ans = 0 ; bool mk = (i >= d ? 1 : 0) | mark;
    for(int j = 1 ; j <= k ; j++){
        if(j >= d) mk = 1;
        ans += func( j , j + tak , n , k , d ,mk);
        ans %= MOD;
        if(!mark) mk = 0;
    }
    return dp[i][tak][mark] = ans;
}

int main(){
    memset(dp , -1 , sizeof dp);
    Long n , k , d;
    cin >> n >> k >> d;
    cout << func(0 , 0 , n , k , d , 0 );
    return 0;
}
