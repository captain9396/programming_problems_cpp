#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  i, mi, n , a[100005], b[100005];
    cin >> n;
    for( i = 0; i<n; i++) cin >> a[i];

    mi = a[n-1];
    b[n-1] = 0;
    for(i=n-2; i>=0; i-=1){
        if(a[i] > mi){
            b[i] = 0;
            mi = a[i];
        }
        else if(a[i] == mi){
            b[i] = 1;
            mi = a[i];
        }
        else b[i] = mi - a[i] + 1;
    }

    for(i=0; i<n; i++) cout << b[i] << " ";
    return 0;
}
