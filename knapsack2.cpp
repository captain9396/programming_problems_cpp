#include<bits/stdc++.h>
#define N 100
using namespace std;

int dp[N][N];
int cost[N], weight[N];
int capacity, n;

int solve(int i, int w){
    if(i == n) return 0;
    if(dp[i][w] != -1) return dp[i][w];
    int profit1 = 0,  profit2 = 0;
    if(w + weight[i] <= capacity){
        profit1 = cost[i] + solve(i + 1, w + weight[i]);
    }
    profit2 = solve(i + 1 , w);
    dp[i][w] = max(profit1, profit2);
    return dp[i][w];
}

int main(){
    memset(dp, -1, sizeof dp);
    cin>>n>>capacity;
    for(int i=0; i<n; i++){
        cin>>cost[i]>>weight[i];
    }
    cout<< solve(0,0);
    return 0;
}
