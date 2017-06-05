///Prims Algorithm

#include<bits/stdc++.h>
using namespace std;
const int N=100000;
struct node{
    int u  , w;
    bool operator< (const node& p)const{
    return w > p.w;
    }
};
vector<int>g[N], cost[N];
int vis[N];

int Prims(int src,int nodes){
    int tt = nodes - 1, p, s = 0;
    priority_queue<node>q;
    while(tt--){
        vis[src] = 1;
        for(int i=0; i<g[src].size(); i++){
            if(vis[ g[src][i] ] == 0){
                node a; a.u = g[src][i], a.w = cost[src][i];
                q.push(a);
            }
        }
        while(vis[src]){
            node tp = q.top();
            q.pop();
            src = tp.u;
            p = tp.w;
        }
        s+=p;
    }
    return s;
}


int main(){
    int node, edge ; cin>>node>>edge;
    int x,y,c;
    for(int i=0; i<edge; i++){
        cin>>x>>y>>c;
        g[x].push_back(y);
        g[y].push_back(x);
        cost[x].push_back(c);
        cost[y].push_back(c);
    }
    int s ; cin>>s;
    cout<<Prims(s, node);
    return 0;
}
