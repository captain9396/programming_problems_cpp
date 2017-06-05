#include<bits/stdc++.h>
using namespace std;
vector<int>g[105];
int deg[105];
int con[105];
void init(int n){
    for(int i=0 ;i <= n; i++) con[i]  = 1;
}

int main(){
    int n, m, x, y;
    cin>>n>>m;
    init(n);
    for(int i=0; i<m; i++){
        scanf("%d%d", &x,&y);
        g[x].push_back(y);
        g[y].push_back(x);
        deg[x]++, deg[y]++;
    }
    int cnt = 0 ;
    while(1){
        vector<int>v;
        for(int i=1; i<=n; i++){
            if(deg[i] == 1 && con[i]){
                v.push_back(i);
                con[i] = 0;
                for(int j=0; j<g[i].size(); j++){
                    deg[g[i][j]]--;
                }
            }
        }

        for(int j=0; j<v.size(); j++){
            cout<<v[j]<<' ';
        }
        cout<<'\n';
        if(v.empty()) break;
        else cnt++;
    }
    cout<<cnt;
    return 0;
}
