#include <bits/stdc++.h>
using namespace std;
int main()
{
    long double  n, m, b1, b2, n1 = 0, n2 = 0, i, a;
    cin >> n >> b1;
    for(i=n-1; i>=0; i--){
        cin >> a; n1+=(pow(b1, i) * a);
    }

    cin >> m >> b2;
    for(i=m-1; i>=0; i--){
        cin >> a; n2+=(pow(b2, i) * a);
    }
    if(n1>n2) cout << ">";
    else if(n1<n2) cout << "<";
    else  cout << "=";
 //   cout << n1 << " " << n2;
    return 0;
}
