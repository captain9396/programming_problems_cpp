#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    string s, t;
    int f = 0;
    cin >> s >> t;

    for(int i=0; s[i]; i+=1){
        if(abs((int)(t[i] - s[i]))>1 && (s[i]!='z' || t[i]!='z')){
            if(s[i] < t[i]) s[i] = s[i] + (t[i] - s[i]);
            else s[i] = s[i] + ;
            f = 1;
            break;
        }
    }
    if(!f) cout << "No such string";
    else cout << s;
    return 0;

}
