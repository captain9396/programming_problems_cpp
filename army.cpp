#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , y=0, yr[150], i, a, b;
    cin >> n;
    for(i=0; i<n-1; i++) cin >> yr[i];
    cin >> a >> b;
    for(i=a-1; i<b-1; i++) y+=yr[i];

    cout << y;
    return 0;
}
