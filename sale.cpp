#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, m, sum = 0, ara[110];
    cin >> n >> m;
    for(i=0; i<n; i++) cin >> ara[i];

    sort(ara, ara+n);

    for(i=0; i<m; i++){
        if(ara[i] >0) break;
        else sum+=abs(ara[i]);
    }
    cout << sum;
    return 0;
}
