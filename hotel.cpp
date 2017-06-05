#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, time = 0, a[105][2], i, j, t, f;
    cin >> n >> s;
    for(i=0; i<n; i++) scanf("%d %d", &a[i][0], &a[i][1]);

    for(i=0; i<n; i++){
        for(j = i+1; j<n; j++){
            if(a[i]<a[j]){
                t = a[i][0];
                a[i][0] = a[j][0];
                a[j][0] = t;

                f = a[i][0];
                a[i][0] = a[j][1];
                a[j][1] = f;
            }
        }
    }

    for(i=0; i<n; i++){
        if(s - a[i][0] > s-a[i][1]) time+=(s - a[i][0]);
        else time+=(s-a[i][1]);
    }

    cout << time;
    return 0;

}
