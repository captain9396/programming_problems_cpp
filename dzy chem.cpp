#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N = 52;
ll vis[N];
vector<ll>g[N];

void Dfs(ll x){
    vis[x] = 1;
    ll sz = g[x].size();
    for(ll i=0; i<sz; i ++){
        if(vis[g[x][i]] == 0){
            Dfs(g[x][i]);
        }
    }
}

int main(){
    ll n, m, x, y, s = 1;
    cin>>n>>m;
    for(ll i=0 ; i<m; i++){
        scanf("%I64d%I64d" , &x, &y);
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for(ll i=1; i<=n; i++){
        if(vis[i]==0) Dfs(i);
        else s*=2;
    }
    cout<<s;
    return 0;
}
