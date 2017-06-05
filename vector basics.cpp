#include <bits/stdc++.h>
typedef long long ll
using namespace std;
int main(){
    ll n, i, a;
    cin >> n;
    vector<ll> vv;

    for(i=0; i<n; i++){
        scanf("%d", &a);
        vv.push_back(a);
    }

    for(i=0; i<n; i++){
        cout << vv.at(i) << " ";
    }
    return 0;
}
