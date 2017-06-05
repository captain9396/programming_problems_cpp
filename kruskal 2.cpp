#include<bits/stdc++.h>
using namespace std;

const int N=100000;
struct edge{
    int u, v, w;
    bool operator <(const edge& p)const{
    return w<p.w;}
};

int par[N];
vector<edge>g;
void Makeset(int n){
    for(int i=0; i<=n; i++) par[i] = i;
}

int  Find(int n){
    if(par[n]==n) return n;
    par[n] = Find(par[n]);
    return par[n];
}

int Kruskal(int nodes){
    Makeset(nodes);
    sort(g.begin(), g.end());
    int s = 0;
    for(int i =0 ; i<g.size(); i++){
        int tx = Find(g[i].u);
        int ty = Find(g[i].v);
        if(tx!=ty){
            par[tx] = ty;
            s+=(g[i].w);
        }
    }
    return s;
}

int main(){
    int n , e;
    cin>>n>>e;
    int x,y, c;
    for(int i=0; i<e; i++){
        cin>>x>>y>>c;
        edge t;
        t.u = x;
        t.v = y;
        t.w = c;
        g.push_back(t);
    }
    cout<<Kruskal(n);
    return 0;
}
