#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, m, n, a[105];
    cin >>n;
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    m = a[2] - a[0];
    for(i=1; i<n-2; i++){
        if(a[i+2] - a[i] < m) m  = a[i+2] - a[i];
    }
    cout << m;
    return 0;
}
