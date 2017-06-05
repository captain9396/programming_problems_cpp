#include <bits/stdc++.h>
using namespace std;
int a[100007];
int main()
{
    int n, k, i , j, f = 0;
    cin >> n >> k;
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    for(i=k-1; i<n; i++){
        if(a[i] != a[k-1]){
            cout << -1;
            return 0;
        }
    }
    for(i=k-1, j = 0; i>=0; i--, j++){
        if(a[i] != a[k-1]){
            k = k - j;
            f = 1;
            break;
        }
    }
    if(f) cout << k;
    else cout << 0;
    return 0;
}
