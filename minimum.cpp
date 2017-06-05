#include<bits/stdc++.h>

using namespace std;
const int N = 111;
int is[N];
int arr[N];
bool vis[N];
vector<int>g[N] , v;
set<int>ans[N];

void Dfs(int n ,int cnt){
    vis[n] = true;
    for(int i=0; i<g[i].size() ; i++){
        if(vis[g[n][i]] == false){
            arr[g[n][i]] = cnt;
            ans[cnt].insert(g[n][i]);
            Dfs(g[n][i] , cnt);
        }
    }
}

int main(){
    int n,x, y , m ;cin>>n>>m;
    for(int i=0; i<m; i++){
        scanf("%d%d", &x, &y);
        g[x].push_back(y);
        g[y].push_back(x);
        is[x] = 1;
        is[y] = 1;
    }
    for(int i=1; i<=n ;i++) {
        if(is[i] == 0) v.push_back(i);
    }
    int cnt = 1;
    for(int i=1; i<=n; i++){
        if(arr[i] == 0 && is[i] == 1){
            arr[i] = cnt;
            ans[cnt].insert(i);
            Dfs(i, cnt);
            cnt++;
        }
    }
    for(int i=1; i <= cnt; i++){
        if(ans[i].size() != 3){
            cout<<-1;
            return 0;
        }
    }
    for(int i=1; i <= cnt; i++){
        for(set<int>::iterator it=ans[i].begin(); it != ans[i].end(); it++){
            printf("%d ", *it);
        }
        printf("\n");
    }

    for(int i=0; i<v.size(); i++){
        printf("%d ", v[i]);
        if((i + 1 )%3 ==0 ) printf("\n");
    }
    return 0;
}
