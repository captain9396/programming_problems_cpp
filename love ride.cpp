#include<bits/stdc++.h>
using namespace std;
vector<int>E[100000];
int cycle;
int vis[100000];
int par[100000];
int color[100000]; /// 0 = WHITE , 1 = GRAY , 2 = BLACK
void dfs(int n){
    vis[n]  = 1;
    color[n] = 1;
    for(int i=0 ; i<E[n].size(); i++){
        if(color[E[n][i]]==1 and par[n]!=E[n][i]) return 1;
        if(vis[E[n][i]] == 0){
            par[ E[n][i] ] = n;
            dfs(E[n][i]);
        }
    }
    color[n] = 2;
}

int main(){
    int node, edge ; cin>>node>>edge;
    int x,y,c;
    for(int i=0; i<edge ; i++){
        scanf("%d%d", &x,&y);
        E[x].push_back(y);
        E[y].push_back(x);
    }

    for(int i=1; i<=node;  i++){
        dfs(i);
    }
    (cycle==1) ? cout<<"cycle exists" : cout<< "no cycle";
    return 0;
}
