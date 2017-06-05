#include<bits/stdc++.h>
#define Long long long
using namespace std;

const int maxn = 10005;

Long dp[23][maxn];
vector< Long > v1;

Long func(int i , int tak , int n , int siz){
    if(i == siz) return 0LL;
    if(tak == n) return 1LL;
    if(tak > n) return 0LL;
    if(dp[i][tak] != -1 ) return dp[i][tak];
    Long ans = 0;
    ans = func(i , tak + v1[i] ,n , siz) + func(i + 1 , tak , n , siz);
    return dp[i][tak] = ans;
}

int main(){
    int x;
    for(int i = 1; i <= 22;  i++) v1.push_back(i * i * i );
    while(scanf("%d" , &x) != EOF){
        Long ans = 0;
        memset(dp , -1 ,sizeof dp);

        printf("%lld\n" , func(0 , 0 ,x , v1.size() ));
    }
}
