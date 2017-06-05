#include<bits/stdc++.h>
using namespace std;
const int maxn = 100007;

int par[maxn];
int A[maxn];
set< int > mx;
vector< int > vv;

int Find(int n){
    return par[n] == n ? n : par[n] = Find(par[n]);
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n ;
    cin >> n;

    for(int i = 0 ; i <= n; i++) par[i] = i;
    for(int i = 1; i <=n ; i++){
        cin >> A[i];
        vv.push_back(A[i]);
        int x = Find(i);
        int y = Find(A[i]);
        par[x] = y;
    }

    for(int i = 0 ;i <vv.size(); i++){
        mx.insert(par[vv[i]]);
    }

    cout << mx.size();
    return 0;
}
