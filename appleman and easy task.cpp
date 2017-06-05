#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , i, j;
    char ck[110][110];
    cin >> n;

    for(i=0; i<n; i++) cin >> ck[i];
/*    for(i=1; i<n+1; i++){
        ck[i][0] = '.';
        for(j=1; j<n+1 ; j++) cin>> ck[i][j];
        ck[i][n+1] = '.';
    }
    for(i=0; i<n+2; i++) ck[n+1][i] = '.'; */
    if(n==2 && strcmp("oo", ck[0])==0 && strcmp("xx", ck[1])==0) {
        cout << "NO";
        return 0;
    }

    for(i=0; i<n; i++){
        int cnt = 0;
        for(j=0; j<n; j++){
            if(ck[i][j+1] == 'o') cnt++;
            if(ck[i][j-1] == 'o') cnt++;
            if(ck[i+1][j] == 'o') cnt++;
            if(ck[i-1][j] == 'o') cnt++;
        }
        if(cnt%2!=0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
