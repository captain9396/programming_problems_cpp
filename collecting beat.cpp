#include <bits/stdc++.h>
using namespace std;

int i, j, k, ans[10]={0};
char str[4][6];


int main()
{
    cin >> k;
    for(i=0; i<4; i++) {
        cin >> str[i];
        for(j=0; j<4; j++){
            if(str[i][j] != '.') ans[(int)str[i][j] - (int)'0']++;
        }
    }

    for(i=1; i<10; i++){
        if(ans[i]>2*k){
            //cout << "YES"
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
   // for(i=1; i<10; i++) cout << ans[i]<< " ";

    return 0;
}
