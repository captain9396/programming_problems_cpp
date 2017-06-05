#include<bits/stdc++.h>
using namespace std;

const int maxn = 100007;

map< string , int  > numbering;
int opp[maxn] , par[maxn];
string word , james , bond;

int Find(int u){
    return par[u] == u ? u : par[u] = Find(par[u]);
}

int main(){

    ios_base::sync_with_stdio(0) ; cin.tie(0); cout.tie(0);
    int n , m , q , p;
    cin >> n >> m >> q;
    for(int i = 1 ; i <= n ; i++){
        cin >> word;
        numbering[word] = i;
        par[i] = i;
    }

    for(int i = 0 ; i < m;  i++){
        cin >> p >> james >> bond;
        int u = numbering[james];
        int v = numbering[bond];
        int x = Find(u);
        int y = Find(v);
        if(p == 1){
            if(opp[x] == y){
                cout << "NO\n";
            }
            else if(x == y) cout << "YES\n";
            else{
                cout << "YES\n";
                par[x] = y;
                par[opp[x]] = opp[y];
            }
        }
        else{
            if(x == y) cout << "NO\n";
            else if(opp[x] == y) cout << "YES\n";
            else {
                cout << "YES\n";
                if(opp[x] == 0 && opp[y] ){
                    par[x] = opp[y];
                }
                else if(opp[x] && opp[y] == 0){
                    par[y] = opp[x];
                }
                else if(opp[x] == 0 && opp[y] == 0){
                    opp[x] = y;
                    opp[y] = x;
                }
                else{
                    par[x] = opp[y];
                    par[opp[x]] = par[y];
                }
            }
        }
    }

    while(q--){
        cin >> james >> bond;
        int u = numbering[james];
        int v = numbering[bond];
        int x = Find(u);
        int y = Find(v);
        if(x == y) cout << "1\n";
        else if (opp[x] == y) cout << "2\n";
        else cout << "3\n";
    }
    return 0;
}
