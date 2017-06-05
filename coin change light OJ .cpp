#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 52;
int n, k;
ll coin[N], tms[N], dp[52][1002][20];

ll go(int i, int w, int m){
    if(i == n){

    }
    if(dp[i][w][m] != -1) return dp[i][w][m];

}

int main(){
    int tc;
    cin>>tc;
    for(int i=0; i<53; i++)
    for(int j=0; j<1003; j++)
    for(int k=0; k<21; k++)
        dp[i][j][k] = -1;

    while(tc--){
        scanf("%d%d", &n,&k);
        for(int i=0; i<n ; i++) scanf("%I64d", &coin[i]);
        for(int i=0; i<n ; i++) scanf("%I64d", &ts[i]);
        printf("Case %d: %I64d\n", go(0,k,0))
    }
}
