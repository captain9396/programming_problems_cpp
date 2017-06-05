#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, a[100005] , cnt = 0;
    cin >> n;
    for(i=0; i<n; i++) cin >> a[i];

    for(i=0; i<n-1; i++){

        if(a[i] > a[i+1]) cnt++;

        if(cnt > 2 ){
            cout << "NO";
            return 0;
        }

    }
    cout << "YES";
    return 0;
}
