#include<bits/stdc++.h>
using namespace std;
const int N = 100;
int coin[10], dp[N][N];
int make;
int n;

int go(int i, int w){
    if(i == n ){
        if(w == 0) return 1;
        else return 0;
    }
    if(dp[i][w]!=-1) return dp[i][w];
    int a = 0, b = 0;
    if(w - coin[i] >=0) a = go(i + 1, w - coin[i]);
    b = go(i + 1 , w);
    dp[i][w] = a + b;
    return dp[i][w];
}

int main(){
    memset(dp, -1, sizeof dp);
    cin>>n;
    for(int i=0; i<n; i++) cin>>coin[i];
    cin>>make;
    cout<<go(0, make);
    return 0;
}
