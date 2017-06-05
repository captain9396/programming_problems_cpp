#include<bits/stdc++.h>
using namespace std;
const int N =100000;
struct edge{
    int u, v, w;
    bool operator< (const edge& p)const{
    return w < p.w;}
};

int par[N];
vector<edge>g;

int Find(int n){
    if(par[n]==n) return n;
    return Find(par[n]); /// Path Compression (Optimization)
    //return par[n];
}

int makeset(int n){
    for(int i=0; i<=n; i++) par[i] = i;
}

int Kruskal(int node){
    sort(g.begin(), g.end());
    int s = 0;
    makeset(node);
    for(int i=0; i<g.size(); i++){
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
    int nd, ed;
    cin>>nd>>ed;
    int x, y, c;
    for(int i=0; i<ed; i++){
        cin>>x>>y>>c;
        edge t ;
        t.u = x;
        t.v= y;
        t.w = c;
        g.push_back(t);
    }
    cout<<Kruskal(nd);
    return 0;
}
