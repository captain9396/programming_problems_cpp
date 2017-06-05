#include<bits/stdc++.h>
using namespace std;
const int N=100000;
struct edge{
    int u, v, w;
    bool operator <(const edge& p)const{
        return w<p.w;
    }
};
int par[N];
vector<edge>g;

void Makeset(int n){
    for(int i=0; i<=n; i++)par[i]=i;
}

int Find(int n){
    if(par[n]==n) return n;
    par[n] = Find(par[n]);    /// Optimization : Path Compression
    return par[n];
}

int Kruskal(int node){
    Makeset(node);
    sort(g.begin(), g.end());
    int s = 0;
    int i=0;
    while(node--){
        int tx = Find(g[i].u);
        int ty = Find(g[i].v);
        if(tx!=ty){
            par[tx] = ty;
            s+=(g[i].w);
        }
        i++;
    }
    return s;
}

int main(){

    int node, edge ,x,y,c;

    cin>>node>>edge;
    for(int i=0; i<edge; i++){
        struct edge t;
        scanf("%d%d%d", &x,&y,&c);
        t.u = x; t.v = y; t.w = c;
        g.push_back(t);
    }

    cout<<Kruskal(node);
    return 0;
}
