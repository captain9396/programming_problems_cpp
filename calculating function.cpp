#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m;
    cin >> n;
    if(n%2 == 1){
        m = n/2; n = (n/2) + 1;
        cout << (m*(m+1)) - (n*n);
    }
    else  {
        n/=2; cout <<  (n*(n+1)) - (n*n);
    }
    return 0;
}
