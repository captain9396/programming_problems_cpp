#include <bits/stdc++.h>
using namespace std;

vector<int>E[100000], cost[100000];
int d[100000];

int dijkstra(int s, int e){
    memset(d, 1e6 , sizeof d);
    d[s] = 0;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int tp = q.front();
        q.pop();
        for(int i=0; i <E[tp].size(); i++){
            if(d[ E[tp][i] ] > d[tp] + cost[tp][i]){
                d[ E[tp][i] ] = d[tp] + cost[tp][i];
                q.push(E[tp][i]);
            }
        }
    }
    return d[e];
}

int main(){
    int node, edge;cin>>node>>edge;
    int x,y,c;
    for(int i= 0; i<edge; i++){
        scanf("%d %d %d", &x,&y,&c);
        E[x].push_back(y);E[y].push_back(x);cost[x].push_back(c);cost[y].push_back(c);
    }

    int query;cin>>query;
    while(query--){
        int s, e;cin>>s>>e;
        cout<<dijkstra(s,e)<<endl;
    }
    return 0;
}
