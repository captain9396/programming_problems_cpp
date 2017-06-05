#include<bits/stdc++.h>
using namespace std;

const int maxn = 111;

int dp[maxn][maxn];

int len;
string s;


bool check(int i , int j) {return (((s[i] == '(' && s[j] == ')') || (s[i] == '[' && s[j] == ']');}

int func(int i , int j){
    if(i >= j) return 0;
    if(i + 1 == j){
        if(check(i , j)) return 0;
        else return 1;
    }
    if(dp[i][j] != -1) return dp[i][j];
    if(check(i , j)){
        return dp[i][j] = func(i + 1 , j - 1);
    }
    else return dp[i][j] = max(1 +func(i  , j - 1) , func(i + 1 , j ) + 1 );
}

int main(){
    cin >> s;
    len = s.length();
    memset(dp , -1 , sizeof dp);
    cout << func(0 , len - 1);
}
