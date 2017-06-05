#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, a, n, m;
    cin>>n>>m;
    vector<int, int> v;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> a;
            v.push_back(a);
        }
    }
    return 0;
}
