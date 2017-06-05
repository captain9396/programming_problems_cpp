#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,i, l, j , h, p, temp, n, ans[35][2];
    cin >> n;

    for(i=0; i<n; i++){
        cin >> a >> p;
        l = 0, h = 0;
        for(j=1; j<a;j++){
            scanf("%d", &temp);
            if(temp > p) h++;
            else if(temp < p) l++;
            p = temp;
        }
        ans[i][0] = l;
        ans[i][1] = h;
    }
    for(i=0; i<n; i++) printf("Case %d: %d %d\n",i+1,ans[i][1], ans[i][0]);

    return 0;
}
