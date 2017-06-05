#include<bits/stdc++.h>
using namespace std;
const int N=100005;
int cat[N], vis[N],  ans[N],par[N];
int deg[N];
vector<int>g[N];
int mx, foo;


int cur[N];

void Bfs(int n){
    queue<int>q;
    int c = 0;
    par[n] = 0;
    ans[n] = 0;
    q.push(n);
    vis[n]=1;
    if(cat[n]) cur[n] = 1, c = 1, ans[n] = 1;
    while(!q.empty()){
        int tp = q.front();
        q.pop();
        for(int i=0; i<g[tp].size(); i++){
            if(vis[g[tp][i]]==0){
                par[g[tp][i]] = tp;
                vis[g[tp][i]] = 1;
                if(cat[g[tp][i]]){
                    c++;
                }
                else c =  0;
                if(c > ans[par[g[tp][i]]]) ans[par[g[tp][i]]] = c;
                ans[g[tp][i]] = ans[par[g[tp][i]]];

                q.push(g[tp][i]);
            }
        }
    }
}
int main(){
    int n,x,y;
    cin>>n>>mx;
    for(int i=0; i<n; i++)scanf("%d", &cat[i+1]);

    for(int i=0; i<n-1; i++){
        scanf("%d%d", &x,&y);
        g[x].push_back(y);
        g[y].push_back(x); deg[x]++, deg[y]++;
    }
    Bfs(1);
    int s = 0;
    for(int i=1; i<=n; i++){
        //if(deg[i]==1 && cur[i]<=mx) s++;
        cout<<ans[i]<<" ";
    }
   // cout<<s;
    return 0;
}
