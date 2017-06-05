#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1)
#define SIZ 100005
#define max3(a,b,c) max(max(a,b),c)
#define max4(a,b,c,d) max(max(a,b), max(c,d))
#define TAKEINP(ara) for(i=0; i<n; i++) cin >> ara[i]
#define FOR(a,n,c) for(i=a; i<n; i+=c)
#define push_back psb
#define pop_back pob
#define ll long long

int main()
{
    int a, b, i , p1 = 0, dr = 0, p2 = 0;
    cin >> a >> b;

    FOR(1,7,1){
        if(abs(a - i) > abs(b - i)) p2+=1;
        else if (abs(a - i) < abs(b - i)) p1+=1;
        else dr+=1;
    }
    cout << p1 <<" "<<  dr <<" "<< p2;
    return 0;
}
