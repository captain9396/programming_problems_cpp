#include <bits/stdc++.h>
using namespace std;
int fr[15][15] = {0};
int main()
{
    int m, cnt = 0, i ,j, a, b;
    cin >> m;
    for(i=0; i<m; i++){
        scanf("%d %d", &a, &b);
        fr[a][b] =1; fr[b][a] =1;
    }

    for(i=1; i<=m; i++){
        for(j=1; j<=m; j++){
            if(fr[i][j]==0) cnt++;
        }
    }
    cout << cnt/2;
}
