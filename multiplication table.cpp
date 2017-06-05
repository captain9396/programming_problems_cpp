#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cnt = 0;
    long long n, x, i;
    cin >> n >> x;

//    if(x == 0)cout << "0";
    for(i=1; i<=n; i++){
        if(x%i==0 && (x/i)<=n) cnt++;
    }
    cout << cnt;
}
