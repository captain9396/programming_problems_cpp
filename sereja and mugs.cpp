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
    int n, s, mugs[105] ,sum = 0;
    cin >> n >> s;
    int ma = 0;
    for(int i = 0; i<n; i++){
        cin >> mugs[i]; sum+=mugs[i];
        if(mugs[i] > ma) ma = mugs[i];
    }

    if(sum - ma > s) cout << "NO";
    else cout << "YES";

    return 0;

}
