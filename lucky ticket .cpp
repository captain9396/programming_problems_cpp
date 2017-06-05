#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum1=0, sum2=0, i, f= 1;
    string s;
    cin >> n >> s;
    for(i=0; s[i]; i++){
        if(s[i]=='4' || s[i]=='7') continue;
        else{
            f = 0; break;
        }
    }
    if(!f){
        cout << "NO";
        return 0;
    }

    for(i=0; i<n/2; i++){
        sum1+=(s[i] - '0');
        sum2+=(s[n-1-i] - '0');
    }
    if(sum1==sum2) cout << "YES";
    else cout << "NO";
}
