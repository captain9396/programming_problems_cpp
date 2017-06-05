#include<bits/stdc++.h>
using namespace std;
const int N = 100000;
struct node{
    int u , w;
    bool operator< ( const node& p)const {
    return w >p.w;}
};

vector<int>g[N], cost[N];
int d[N];

int Dijk(int s, int e){
    memset(d, 1e6, sizeof d);
    node a, b;
    d[s] = 0;
    a.u = s; a.w = 0;
    priority_queue<node>q;
    q.push(a);
    while(!q.empty()){
        node tp = q.top();
        q.pop();
        for(int i=0 ; i<g[tp.u].size(); i++){
            if(d[g[tp.u][i]] > d[tp.u] + cost[tp.u][i]){
                d[g[tp.u][i]] = d[tp.u] + cost[tp.u][i];
                b.u = g[tp.u][i];
                b.w = d[g[tp.u][i]];
                q.push(b);
            }
        }
    }
    return d[e];
}
int main(){
    int node, edge ; cin>>node>>edge;
    int x,y ,c;
    for(int i=0; i<edge; i++){
        cin>>x>>y>>c;
        g[x].push_back(y);
        g[y].push_back(x);
        cost[x].push_back(c);
        cost[y].push_back(c);

    }

    int query;cin>>query;
    while(query--){
        int s, e;
        cin>>s>>e;
        cout<<Dijk(s, e)<<endl;
    }
    return 0;
}
