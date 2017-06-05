#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n, m, num[150] = {0} , cnt = 0;
    string temp;
    char tb[110][110] , c;
    cin >> n >> m >> c;

    for(i=0; i<110; i++){
        for(j=0; j<110; j++) tb[i][j] = '0';
    }

    for(i=1; i<n+1 ; i++){
        cin >> temp;
        for(j = 1; j<m+1; j++) tb[i][j] = temp[j-1];
    }

    for(i=1; i<n+1; i++){
        for(j=1; j<m+1; j++){
            if(tb[i][j] == c){
                num[(int)tb[i+1][j]]++;
                num[(int)tb[i-1][j]]++;
                num[(int)tb[i][j+1]]++;
                num[(int)tb[i][j-1]]++;
            }
        }
    }

    num[(int)c] = 0;

    for(i=65; i<=91; i++){
        if(num[i]!=0) cnt++;
    }
    cout << cnt;
    /*
    for(i=0; i<10; i++){
        cout << tb[i] << "\n";
    } */
    return 0;
}
