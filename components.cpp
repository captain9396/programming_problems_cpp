#include<bits/stdc++.h>
using namespace std;

class UnionFind{
public:
    int par[10001];
    UnionFind(){}
    UnionFind(int n)
    {
        for(int i=0 ; i<=n; i++) par[i]=i;
    }
    int Find(int n);
    void Union(int& a, int& b);
    int Components(int n);
};

int UnionFind::Find(int n){
    return (par[n]==n) ? n : par[n] = Find(par[n]);
}

void UnionFind::Union(int& a, int& b){
    par[a] = b;
}

int UnionFind::Components(int n){
    int cnt = 0;
    int a[10001]; memset(a, 0 , sizeof a);
    for(int i=1; i<= n; i++) par[i] = Find(i);
    for(int i=1; i<=n ;i ++) a[par[i]]++;
    for(int i=1; i<=n ;i++){
        if(a[i] > 0) cnt++;
    }
    return cnt;
}

int main(){
    bool cycle;
    int n ; cin>>n;
    UnionFind foo(n);
    int a, b;
    while(cin>>a>>b){
        cycle = false;
        int p = foo.Find(a);
        int q = foo.Find(b);
        if( p == q) cycle = true;
        foo.Union(a,b);
        if(cycle == true){
            cout<<foo.Components(n)<<" CYCLE FORMED!"<<endl;
        }
        else{
            cout<<foo.Components(n)<<endl;
        }
    }
    return 0;
}
