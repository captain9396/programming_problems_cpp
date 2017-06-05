#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  d1, d2, d3, ara[4];
    cin >> d1 >> d2 >> d3;
    ara[0] = d1+d2+d3;
    ara[1] = (2*d1) + (2*d2);
    ara[2] = (2*d1) + (2*d3);
    ara[3] = (2*d2) + (2*d3);

    long long mi = ara[0];
    for(int i=1; i<4; i++){
        if(ara[i] < mi) mi = ara[i];
    }
    cout << mi;
    return 0;

}
