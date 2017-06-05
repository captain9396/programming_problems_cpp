#include <bits/stdc++.h>
using namespace std;
int pp[305];
int main()
{
    int p, n, k = 1, ans = -1, i, t;
    cin >> p >> n;
    for(i=0; i<n; i++){
        cin >> t;
        if(pp[t%p] && k){
            ans = i+1;
            k = 0;
        }
        pp[t%p]++;
    }
    cout << ans;
    return 0;
}
