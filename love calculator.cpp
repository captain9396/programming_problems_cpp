#include<bits/stdc++.h>
using namespace std;

string s1 , s2;
int dp[31][31];
int func(int i , int j , int m ,int n){
    if(i == m || j == n) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    if(s1[i] == s2[j]) return dp[i][j] = 1 + func(i + 1 , j + 1 , m , n);
    else return dp[i][j] = max(func(i + 1 , j , m , n) , func(i , j + 1 , m , n));
}

int res1(int i , int j , int m , int n){
    return  m  + n - func(i , j , m , n);
}

int main(){
    memset(dp , -1  , sizeof dp);
    cin >> s1 >> s2;
    cout << res1(0 , 0 , s1.length() , s2.length());
    return 0;
}
