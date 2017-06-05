#include<bits/stdc++.h>
using namespace std;
int n, m;
int cat[100005];
vector<int>g[100005];
int vis[100005];

void dfs(int u, int mx, int cur){
    vis[u] = 1;
    int sz = g[u].size();
    for(int i=0; i<sz; i++){
        if(vis[g[u][i]==0){
            if()
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n; i++) scanf("%d", &cat[i + 1]);
    for(int i=0; i<n-1; i++){
        scanf("%d%d", &x, &y);
        g[x].push_back(y);
        g[y].push_back(x);
    }

}
