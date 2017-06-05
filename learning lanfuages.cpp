#include<bits/stdc++.h>
using namespace std;
void makeset(int n){
    for(int i=0; i<=n ; i++) par[i] = i;
}

int Find(int n){
    if(par[n]==n) return n;
    return par[n] = Find(par[n]);
}


int main(){
    int n, m;
    cin>>n>>m;
    while(n--){
        scanf("%d", &k);
        if(!k) cnt++;
        else{
            scanf("%d", &t);
            for(int i=1; i<k; i++){
                scanf("%d", &a);
                g[t].push_back(a);
                g[a].push_back(t);
            }
        }
    }
}
