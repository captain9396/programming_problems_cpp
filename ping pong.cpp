#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
    long long u, v;
};

ll  vis[101];
long long foo;
vector<node>nd;
vector<ll>g[101];

ll Bfs(ll s, ll e){
    memset(vis, 0, sizeof vis);
    vis[s] = 1;
    queue<ll>q;
    q.push(s);
    while(!q.empty()){
        ll tp = q.front();
        q.pop();
        for(ll i=0; i<g[tp].size(); i++){
            if(g[tp][i] == e) return 1;
            if(vis[g[tp][i]] == 0){
                vis[g[tp][i]] = 1;
                q.push(g[tp][i]);
            }
        }
    }
    return 0;
}
int main(){
    long long x,y,n, r; cin>>n;
    node z; z.u  =0; z.v = 0;
    nd.push_back(z);
    while(n--){
        scanf("%I64d%I64d%I64d", &r,&x,&y);
        if(r==1){
            foo++;
            node f;
            f.u = x; f.v= y;
            nd.push_back(f);
            for(ll i=1; i<foo;i++){
                if((x > nd[i].u && x < nd[i].v) || (y > nd[i].u && y < nd[i].v)){
                    g[foo].push_back(i);
                }
                if((nd[i].u > x && nd[i].u < y) || (nd[i].v > x && nd[i].v < y)){
                    g[i].push_back(foo);
                }
            }
        }
        else{
            if(Bfs(x,y)) printf("YES\n");
            else printf("NO\n");
        }
    }
    //for(ll i=0; i<g[7].size(); i++) cout<<g[7][i]<<" ";
    return 0;
}
