#include <bits/stdc++.h>
using namespace std;
int chksq(int n)
{
    if(sqrt((double)n) - (double)(int)sqrt((double)n)) return 0;
    return 1;
}

char brd[110][110]
int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >>  x3 >> y3;
    if(chksq((x1*y1) + (x2*y2) + (x3*y3))==0) cout << -1;

    else {
        cout << sqrt((x1*y1) + (x2*y2) + (x3*y3)) << endl;

    }
    return 0;
}
