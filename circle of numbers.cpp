#include<bits/stdc++.h>
using namespace std;
const int N = 100010;
vector<int>g[N];
bool vis[N];
void Bfs(int s){
    queue<int>q;
    vector<int>foo;
    q.push(s);
    while(!q.empty()){
        int tp = q.front();
        q.pop();
        printf("%d ", tp);
        for(int i=0 ; i<g[tp].size(); i++){
            foo.push_back(g[tp][i]);
        }
        for(int i=0; i<foo.size(); i++){

        }
    }
}
int main(){
    int n, sz , x, y;
    cin>>n;
    sz = 2*n;
    for(int i=0; i<sz;i ++){
        scanf("%d%d", &x,&y);
        g[x].push_back(y);
    }

    Bfs(1);
    return 0;
}
