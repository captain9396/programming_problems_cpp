#include<bits/stdc++.h>
using namespace std;
const int N = 1000;
int coin[N];
int dp[N][N];
int total;
int make;

int func(int i, int amount){
    if(i == total){
        if(amount == make)
            return 1 ;
        else return 0;
    }
    if(dp[i][amount] != -1) return dp[i][amount];
    int a = 0, b = 0;
    if(coin[i] + amount <= make) a = func(i + 1, coin[i] + amount);
    b = func(i + 1, amount);
    return dp[i][amount] = a + b;
}

int main(){
    memset(dp, -1, sizeof dp);
    cin>>total;
    for(int i =0; i<total; i++) cin>>coin[i];
    //for(int i=0; i<1000; i++){
    cin>>make;
    if(func(0, 0)) cout<<"yes";
    else cout<<"no";
    return 0;
}
