#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b%a==0) return a;
    return gcd(b%a, a);
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << gcd(n,m);
    return 0;
}
