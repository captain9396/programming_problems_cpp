#include <bits/stdc++.h>
using namespace std;
 int sum = 0;
int digsum(int n)
{
    if(n==0) return 0;
    return n + digsum(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << digsum(n);

    return 0;
}
