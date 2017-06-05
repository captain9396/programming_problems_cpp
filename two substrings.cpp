#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, f1=0, f2=0, l;
    char s[100005];
    cin >> s;
    l = strlen(s);
    for(i=0; i<l; i++){
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]!='A') f1=1;
        else if(s[i]=='B' && s[i+1]=='A' && s[i+2]!='B') f2=1;
        if(f1 && f2){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;

}
