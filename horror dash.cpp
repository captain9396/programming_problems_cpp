#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, m, tt, a, aa[35];
    cin >> n;
    for(i=0; i<n; i++){
        scanf("%d", &a);
        m = -1;
        for(j=0; j<a; j++){
            scanf("%d", &tt);
            if(tt>m){
                m = tt;
            }
        }
        aa[i] = m;
    }
    for(i=0; i<n; i++) printf("Case %d: %d\n",i+1, aa[i]);


    return 0;
}
