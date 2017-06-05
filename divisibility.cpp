#include <bits/stdc++.h>
using namespace std;
long long k, a, b;

int main()
{
    cin >> k >> a >> b;

    int i = a;
    while(i%k!=0) i++;
    int num = i;
    cout << num;
    return 0;
}

