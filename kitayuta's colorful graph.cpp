#include<bits/stdc++.h>
#define COL 105
#define NODE 105
using namespace std;
vector<int>g[COL][NODE];
set<int>cnode[COL];

int vis[105][105][105] ;
int dp[105][105];
void Bfs(int s, int col){
    queue<int>q;
    q.push(s);
    vis[col][s][s] = 1;
    while(!q.empty()){
        int tp = q.front();
        q.pop();
        for(int i=0; i<g[col][tp].size(); i++){
            if(vis[col][tp][g[col][tp][i]] == 0){
                dp[s][g[col][tp][i]]++;
                vis[col][tp][g[col][tp][i]] = 1;
                q.push(g[col][tp][i]);
            }
        }
    }
}

int main(){
    int n , m, mx = -1, x, y,c; cin>>n>>m;
    for(int i=0; i<m ;i++){
        scanf("%d%d%d", &x,&y,&c);
        g[c][y].push_back(x);
        g[c][x].push_back(y);
        mx = max(mx, c);
        cnode[c].insert(x);
        cnode[c].insert(y);
    }
    cout<<mx <<endl;
    for(int i=1; i<=mx; i++){
        for(set<int>::iterator it = cnode[i].begin() ; it!= cnode[i].end(); it++){
            Bfs(*it , i);
            cout<<*it<<" ";
        }
        cout<<endl;
    }

    int query;cin>>query;
    int a, b;
    while(query--){
        scanf("%d%d", &a,&b);
        printf("%d\n", dp[a][b]);
    }
    return 0;
}
