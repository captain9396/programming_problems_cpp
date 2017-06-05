#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j;
    string s, a[8], res[10];
    cin >> s;
    a[0] =  s.substr(0,10);
    a[1] =  s.substr(10,10);
    a[2] =  s.substr(20,10);
    a[3] =  s.substr(30,10);
    a[4] =  s.substr(40,10);
    a[5] =  s.substr(50,10);
    a[6] =  s.substr(60,10);
    a[7] =  s.substr(70,10);
    for(i=0; i<10 ; i++) cin >> res[i];

    for(i=0; i<8; i++){
        for(j=0; j<10; j++){
            if(a[i]==res[j]){
                printf("%d", j);
                break;
            }
        }
    }


    return 0;
}
