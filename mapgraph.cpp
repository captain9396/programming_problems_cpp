#include<bits/stdc++.h>
using namespace std;
map<string, vector<string> > g;
map<string, int > dis;

int main(){
    string S,T , src;
    int node, edge; cin>>node>>edge;
    cin>>S>>T;
    g[T].push_back(S);
    g[S].push_back(T);
    for(int i = 1 ; i<node; i++){
        cin>>T>>S;
        g[T].push_back(S);
        g[S].push_back(T);
    }

    cin>>src;
    dis[src] = 0;
    queue<string>q;
    q.push(src);
    while(!q.empty()){
        string tp = q.front();
        q.pop();
        for(int i = 0 ; i<g[tp].size() ; i++){
            if(dis[g[tp][i]] == 0 && g[tp][i] != src){
                dis[g[tp][i]] = dis[tp] + 1;
                q.push(g[tp][i]);
            }
        }
    }
    int query;cin>>query;
    while(query--){
        cin>>S;
        cout<<dis[S]<<endl;
    }
    return 0;
}
