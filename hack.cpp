#include <bits/stdc++.h>
using namespace std;
int main()
{
    double m1,m2,m3,m4,m5,w1, w2, w3, w4, w5,h1, h2;
    cin >> m1>>m2>>m3>>m4>>m5;
    cin >> w1>> w2>>w3>>w4>>w5;
    cin >> h1 >> h2;
    double sum = max(0.3*500, (1 - (m1/250))*500 - 50*w1) + max(0.3*1000, (1 - (m2/250))*1000 - 50*w2)+max(0.3*1500, (1 - (m3/250))*1500 - 50*w3)+max(0.3*2000, (1 - (m4/250))*2000 - 50*w4)+max(0.3*2500, (1 - (m5/250))*2500 - 50*w5) + (100*h1) - (50 * h2);
    cout << (int)sum;
}
