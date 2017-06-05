#include<bits/stdc++.h>
#define pii pair<int,int>
#define ff first
#define ss second
#define repi(I,N) for(int i=I; i<N; i++)
#define repj(I,N) for(int j=I; j<N; j++)
#define repk(I,N) for(int k=I; k<N; k++)
using namespace std;
const int N=100;
int dx[]={0,0,1,-1,1,1,-1,-1};
int dy[]={1,-1,0,0,1,-1,-1,1};

struct node{
    int u, w;
    bool operator< (const node& p)const{
    return w> p.w;
    }
};

vector<int>g[N], cost[N];
int d[N];

int dijkstra(int s, int e){
    memset(d, 1000000, sizeof d);
    d[s] = 0;
    node a, b;
    a.u = s;
    a.w = 0;
    priority_queue<node>q;
    q.push(a);
    while(!q.empty()){
        node tp = q.top();
        q.pop();
        for(int i=0 ; i<g[tp.u].size(); i++){
            if(d[g[tp.u][i]] > d[tp.u] + cost[tp.u][i]){
                d[g[tp.u][i]] = d[tp.u] + cost[tp.u][i];
                b.u = g[tp.u][i], b.w = d[g[tp.u][i]];
                q.push(b);
            }
        }
    }
    return d[e];
}

int main(){
    int node , edge;
    cin>>node>>edge;
    int x,y,c;
    for(int i=0; i<edge; i++){
        cin>>x>>y>>c;
        g[x].push_back(y);
        g[y].push_back(x);
        cost[x].push_back(c);
        cost[y].push_back(c);
    }
    int query;
    cin>>query;
    while(query--){
        int s, e;cin>>s>>e;
        cout<<dijkstra(s,e)<<endl;
    }
    return 0;
}


