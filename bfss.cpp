#include <bits/stdc++.h>
using namespace std;
int d[100000];
vector<int>E[10000];

int bfs(int s, int e){
    memset(d, -1, sizeof d);
    d[s] = 0;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int tp = q.front();
        q.pop();
        for(int i =0; i<E[tp].size(); i++){
            if(d[ E[tp][i] ] == -1){
                d[E[tp][i] ] = d[tp] + 1;
                q.push(E[tp][i]);
            }
        }
    }
    return d[e];
}


int main(){
    int node, edge ;cin>>node>>edge;
    int x, y, c;
    for(int i =0; i<edge; i++){
        scanf("%d %d", &x,&y);
        E[x].push_back(y); E[y].push_back(x);
    }

    int query;cin>>query;
    while(query--){
        int s, e; cin>>s>>e;
        cout<<bfs(s,e)<<endl;
    }
    return 0;
}
