#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, arax[5000], aray[5000], maxx, mxx, mxy, minx, miny;
    cin >> n;
    cin >> arax[0] >> aray[0];
    mxx = arax[0] , minx = arax[0], mxy = aray[0], miny = aray[0];
    for(int i=1; i<n ; i++){
        cin >> arax[i] >> aray[i];
        if(arax[i] > mxx) mxx = arax[i];
        if(aray[i] > mxy) mxy = aray[i];
    }
    for(int i =0 ; i<n; i++){
        if(arax[i] < minx) minx = arax[i];
        if(aray[i] < miny) miny = aray[i];
    }

    maxx = max(fabs(mxx-minx), fabs(mxy - miny));
    cout << maxx * maxx;

    return 0;
}
