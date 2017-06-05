#include <bits/stdc++.h>
using namespace std;
int n, l, i , sum = 0;
int a[100005];

int main()
{
    cin >> n >> l;

    for(i=0; i<n; i++) cin >> a[i];

    for(i=0; i<n; i++){
        sum+= (a[i]/l);
    }
    cout <<sum*l;

    return 0;
}
