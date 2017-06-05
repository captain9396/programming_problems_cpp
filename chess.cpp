#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, p;
    int  cb[12][13] = {0};
    char r[5], k[5];
    cin >> r >> k;

//    cb[(int)r[1]-47][(int)r[0]-95] = '0';
//    cb[(int)k[1]-47][(int)k[0]-95] = 1;

    for(i=(int)r[1]-47, p = (int)r[0]-95, j=2 ; j<10 ;j++){ cb[i][j] = 1; cb[j][p] = 1;}


    cb[(int)k[1]-47][(int)k[0]-95] = 1;
    cb[(int)k[1]-47-1][(int)k[0]-95+2] = 1;
    cb[(int)k[1]-47-2][(int)k[0]-95+1] = 1;
    cb[(int)k[1]-47+1][(int)k[0]-95+2] = 1;
    cb[(int)k[1]-47+2][(int)k[0]-95+1] = 1;
    cb[(int)k[1]-47-1][(int)k[0]-95-2] = 1;
    cb[(int)k[1]-47-2][(int)k[0]-95-1] = 1;
    cb[(int)k[1]-47+1][(int)k[0]-95-2] = 1;
    cb[(int)k[1]-47+2][(int)k[0]-95-1] = 1;

    cb[(int)r[1]-47][(int)r[0]-95] = 1;
    cb[(int)r[1]-47-1][(int)r[0]-95+2] = 1;
    cb[(int)r[1]-47-2][(int)r[0]-95+1] = 1;
    cb[(int)r[1]-47+1][(int)r[0]-95+2] = 1;
    cb[(int)r[1]-47+2][(int)r[0]-95+1] = 1;
    cb[(int)r[1]-47-1][(int)r[0]-95-2] = 1;
    cb[(int)r[1]-47-2][(int)r[0]-95-1] = 1;
    cb[(int)r[1]-47+1][(int)r[0]-95-2] = 1;
    cb[(int)r[1]-47+2][(int)r[0]-95-1] = 1;

    int cnt =0;
    for(i=2; i<10; i++){
        for(j=2; j<10; j++){
            if(cb[i][j]==0) cnt++;
        }
    }
    cout << cnt;
 /*   for(i=0; i<12; i++){
        for(j=0; j<12; j++) cout << cb[i][j] <<" ";
        cout << "\n";
    }*/

    return 0;
}
