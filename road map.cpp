#include<bits/stdc++.h>
using namespace std;
vector< int >foo[100000];
int parent[100000];
int main(){
    int n, r1, r2, x;
    cin>>n>>r1>>r2;
    for(int i=1 ; i <=n; i++){
        if(i!=r1){
            scanf("%d", &x);
            foo[x].push_back(i);foo[i].push_back(x);
        }
    }

    queue<int>   q;
    parent[r2] = -1;
    q.push(r2);
    while(!q.empty()){
        int tp = q.front();
        q.pop();
        int sz = foo[tp].size();
        for(int i=0; i<sz; i++){
            if(parent[ foo[tp][i] ] == 0){
                parent[ foo[tp][i] ] = tp;
                q.push(foo[tp][i]);
            }
        }
    }
    for(int i=1; i<=n; i++){
        if(i!=r2)
            printf("%d ", parent[i]);
    }
    return 0;
}
