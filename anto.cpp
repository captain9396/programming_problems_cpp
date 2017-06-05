#include<bits/stdc++.h>
using namespace std;

map< string , long long > M;
long long ans ;
string foo;

int main(){
    ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0);
    M["Tetrahedron"] = 4;
    M["Cube"] = 6;
    M["Octahedron"] = 8;
    M["Dodecahedron"] = 12;
    M["Icosahedron"] = 20;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> foo;
        ans += M[foo];
    }
    cout << ans;
    return 0;

}
