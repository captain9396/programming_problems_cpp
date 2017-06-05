#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1)
#define SIZE 100005
#define SIZEM 1000006
#define max3(a,b,c) max(max(a,b),c)
#define max4(a,b,c,d) max(max(a,b), max(c,d))
#define min3(a,b,c) min(min(a,b),c)
#define min4(a,b,c,d) min(min(a,b), min(c,d))
#define TAKEINP(ara) for(i=0; i<n; i++) cin >> ara[i]
#define push_back psb
#define pop_back pob
#define ll long long

int main()
{
    int n, k, l , c, d, p, nl, np;
    cin >> n>> k>> l >> c>> d>> p>> nl>> np;
    cout << min3((k*l)/(nl*n),(c*d)/n,p/(np*n));
    return 0;
}
