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
    int i, n , m  , k , wash = 0;
    cin >> n >> m >> k;
    FOR(0,n,1){
        cin >> a;
        if(a==1) cnt1+=1;
        else cnt2+=1;
    }
    if(cnt1 - m >= 0)wash = cnt1 - m;
    wash+=(cnt1 - m)
}
