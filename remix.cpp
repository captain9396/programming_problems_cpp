#include<bits/stdc++.h>
#define max(a,b) (((a) > (b)) ? (a) : (b))
#define MOD 1000000007
#define Long long long
using namespace std;

const int maxn = 50007;
Long dp[maxn][3];

Long func(int i , int dig, int cnta , int cntb , int n , int a , int b){
    if(i == n + 1){
        return 1;
    }
    if(dp[i][dig] != -1) return dp[i][dig];
    Long n1 , n2 ; n1 = n2 = 0;
    cout << i << ' ' << dig << ' ' << cnta << ' ' << cntb << endl;
    if(cnta < a) n1 = func(i + 1 , 1 , cnta + 1 , 0 , n , a, b);
    if(cntb < b) n2 = func(i + 1 , 2 , 0, cntb + 1 , n , a , b);
    return dp[i][dig] = (n1 + n2) % MOD;
}

int main(){
    int n  ,a , b;
    cin >> n >> a >> b;
    memset(dp , -1 , sizeof dp);
    cout << func(1 , 1 , 1 , 0 ,  n , a , b)  +  func(1 , 2 ,0 , 1, n ,a ,b);
    return 0;
}
