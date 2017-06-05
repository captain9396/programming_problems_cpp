#include<bits/stdc++.h>
using namespace std;
const int N=100;
int capacity, weight[N], cost[N];
int dp[N][N];
int n; /// total things

int func(int i, int w){
    if(i==n) return 0;
    if(dp[i][w] != -1 ) return dp[i][w];

    int profit1= 0, profit2 = 0;

    if(w + weight[i]<=capacity) profit1 = cost[i] + func(i + 1, w + weight[i]);
    else profit1=0;
    profit2 = func(i + 1, w);
    dp[i][w] = max(profit1, profit2);
    return dp[i][w]
}

int main(){
    memset(dp, -1, sizeof dp);
    cin>>n>>capacity;
    for(int i=0; i<n; i++) scanf("%d%d", &cost[i], &weight[i]);

    cout<<func(0,0);
    return 0;
}
