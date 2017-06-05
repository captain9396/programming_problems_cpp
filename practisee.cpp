#include<bits/stdc++.h>
#define ff first
#define ss second
#define pii pair<int,int>
#define INF (1LL<<40)
/// procedure BELLMAN FORD
using namespace std;
const int N=100000;
vector<int>g[N];
int d[N];

int main(){
    int node, edge, x, y,c; cin>>node>>edge;

    memset(d, 1000000, sizeof d);

    for(int i=0; i<edge; i++){
        scanf("%d%d%d", &x,&y,&c);
        g[i].push_back(x);
        g[i].push_back(y);
        g[i].push_back(c);
    }

    for(int i=0; i<node-1; i++){
        for(int j=0; j<edge; j++){
            if(d[g[j][1]] > d[ g[j][0] ] + g[j][2]){
                d[g[j][1]] = d[ g[j][0] ] + g[j][2];
            }
        }
    }
    bool f = true;
    for(int j=0; j<edge; j++){
        if(d[g[j][1]] > d[ g[j][0] ] + g[j][2]){
            f = false;
            break;
        }
    }
    if(!f) cout<<"no shortest path possible , negative cycle found";
    else {

    }
}
