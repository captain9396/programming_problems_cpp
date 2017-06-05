#include<bits/stdc++.h>
using namespace std;

string dp[2000][15];


long long func(int i , int dig ,int n , int k , int pre){
    if(i == n)return "1";
    if(dp[i][dig] != "-1") return dp[i][dig];
    string ans = "0";
    for(int j = (dig? 0 : 1 ); j <= k - 1; j++){
        ans = func(i + 1 , j , n , k , dig);
    }
    return dp[i][dig] = ans;
}

int main(){
    memset(dp , -1 ,sizeof dp);
    int n , k;
    long long ans = 0;
    cin >> n  >> k;
    for(int i = 1; i <= k-1; i++)
        ans += func(1 , i , n , k , 1);

    cout << ans;
    return 0;
}
