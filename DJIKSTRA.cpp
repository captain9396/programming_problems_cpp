#include<bits/stdc++.h>
using namespace std;

struct node{
    int ct, dis;
    bool operator <(const node& p)const{
        return dis > p.dis;
    }
};

vector<int>E[10000], cost[10000];
int d[100000];

int djikstra(int s, int e){
    memset(d, 1000000 , sizeof d);
    d[s] = 0;
    node a, b;
    a.ct = s; a.dis = 0;
    priority_queue<node> q;
    q.push(a);
    while(!q.empty()){
        node tp  =q.top();
        q.pop();
        for(int i =0 ; i<E[tp.ct].size(); i++){
            if(d[ E[tp.ct][i] ] > d[tp.ct] + cost[tp.ct][i]){
                d[ E[tp.ct][i] ] = d[tp.ct] + cost[tp.ct][i];
                b.dis = d[E[tp.ct][i]]; b.ct = E[tp.ct][i];
                q.push(b);
            }
        }
    }
    return d[e];
}


int main(){
    int node, edge; cin>>node>>edge;
    int x, y, c;
    for(int i =0 ; i<edge ; i++){
        scanf("%d%d%d", &x,&y,&c);
        E[y].push_back(x);
        E[x].push_back(y);
        cost[x].push_back(c);
        cost[y].push_back(c);
    }

    int query; cin>>query;
    while(query--){
        int s,e;
        cin>>s>>e;
        cout<<djikstra(s, e)<<endl;
    }
    return 0;
}
