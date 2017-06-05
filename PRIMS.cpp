#include<bits/stdc++.h>
using namespace std;
struct node{
    int u, w;
    bool operator <(const node& p)const{
    return w > p.w;
    }
};
int vis[100000];
vector<int>E[100000], cost[100000];

int primsAlgo(int src, int nodes){
    int s = 0, tt = nodes - 1, p;
    priority_queue<node>q;
    while(tt--){

        vis[src] = 1;
        for(int i=0; i<E[src].size(); i++){
            if(vis[ E[src][i] ] == 0){
                node a;
                a.u = E[src][i];
                a.w = cost[src][i];
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

}
