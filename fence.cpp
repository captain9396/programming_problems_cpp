#include<bits/stdc++.h>
#define INF (1LL<<40)
#define rep(I,N) for(int i=I; i<N; i++)
using namespace std;
typedef long long ll;
const int N= 5*100005;
ll  a[N], dp[N];
ll n , k;

int main(){
    ll mn = INF , s = 0, ind = 1;
    cin>>n>>k;
    rep(0,n) scanf("%I64d", &a[i]);

    for(int i=0; i<k; i++)  s+=a[i];

    dp[0] = s;
    mn = dp[0];
    for(int i=k, j = 1; i<n; i++, j++){
        dp[j] = (dp[j-1] + a[i] - a[i - k]);
        //cout<<dp[j]<<endl;
        if(dp[j] < mn){
            mn = dp[j];
            ind = j + 1;
        }
    }
    cout<<ind;
    return 0;
}
