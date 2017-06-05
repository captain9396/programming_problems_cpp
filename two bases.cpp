#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  n, m, b1, b2, n1 = 0, n2 = 0, i, a[50], b[50];
    cin >> n >> b1;
    for(i=n-1; i>=0; i--){
        cin >> a[i]; n1+=(pow(b1, i) * a[i]);
    }

    cin >> m >> b2;
    for(i=m-1; i>=0; i--){
        cin >> b[i]; n2+=(pow(b2, i) * b[i]);
    }

    if(n1>n2) cout << ">";
    else if(n1<n2) cout << "<";
    else  cout << "=";
    cout << "\n";
    cout << n1 << " " << n2;
    return 0;
}
