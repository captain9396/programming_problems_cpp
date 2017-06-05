#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int i;
    string s;
    cin >> s;
    for(i=0; i<s.length() - 1; i++){
        if(s[i]=='A' && s[i+1]=='B') a[i+1]=1;
        else if(s[i]=='B'&& s[i+1]=='A') a[i+1] = 2;
        else a[i+1] = 0;
    }
    for(i=1; i<s.length()-1; i++){
        if(a[i]==1 && a[i-1]!=2 )
    }
    return 0;
}
