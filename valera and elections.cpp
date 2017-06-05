#include<bits/stdc++.h>
using namespace std;
const int N=100005;
vector<int>g[N], nok[N] , ans;
int vis[N];

bool operator <()
void Dfs(int u, int cur){
    vis[u] = 1;
    nok[u][i] = 0;
    for(int i=0 ; i<g[u].size(); i++){
        if(vis[g[u][i]]==0){
            if(nok[u][i]) cur++;
            Dfs(g[u][i], cur);
            if(deg[g[u][i]] == 1 && kam[g[u][i]] >0){
                ans.push_back(g[u][i]);
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n - 1; i++){
        scanf("%d%d%d", &x,&y, &p);
        g[x].push_back(y);
        g[y].push_back(x);
        if(p==2){
            nok[x].push_back(1);
            nok[y].push_back(1);
        }
        else{
            nok[x].push_back(0);
            nok[y].push_back(0);
        }
    }
}
