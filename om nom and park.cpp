#include<bits/stdc++.h>
using namespace std;
int a, b, foo[2500], vis[2500];
int deg[2500];
vector<int>g[2500], lamp[2500];
template<typename T> T power(T x, T n){
    T s = 1;
    for(int i=0; i<n; i++) s*=x;
    return s;
}

void Dfs(int u, int total){
    foo[u] = total;
    vis[u] = 1;
    for(int i=0 ; i<g[u].size(); i++){
        if(vis[g[u][i]] == 0){
            vis[g[u][i]] = 1;
            Dfs(g[u][i], total + lamp[u][i]);
        }
    }

}


int main(){
    int n ; cin>>n;
    for(int i=1; i<=(power(2,n + 1) - 2 )/2; i++){
        scanf("%d%d", &a, &b);
        g[i].push_back(2*i);
        g[i].push_back(2*i + 1);
        g[2*i].push_back(i);
        g[2*i + 1].push_back(i);
        lamp[i].push_back(a);
        lamp[2*i].push_back(a);
        lamp[i].push_back(b);
        lamp[2*i + 1].push_back(b);
    }
    Dfs(1, 0);
    int mx = -1, s = 0;
    for(int i=1; i<=power(2,n + 1) - 1  ; i++) cout<<foo[i]<<" ";
    cout<<'\n';
    int t= power(2,n + 1) - 1;
    int leaf = (t + 1)/2;
    cout<<t<<' '<<leaf<<endl;
    for(int i=t , c= 0; c < leaf; i--, c++){
        mx = max(mx, foo[i]);
        s+=foo[i];
    }
    cout<<s<<endl;
    cout<<(mx * leaf) - s;
    return 0;

}
