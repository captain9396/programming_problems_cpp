#include <bits/stdc++.h>
using namespace std;
int a[30], b[30];
int main()
{
    char s[100005], t[100005];
    cin >> s >> t;
    int i , cnt = 0;
    if(strlen(s) != strlen(t)) cout << "NO";
    else {
        for(i=0; s[i]; i++){
            a[s[i] - 'a']++; b[t[i] - 'a']++;
        }
        for(i=0; i<30; i++){
            if(a[i]!= b[i]){
                cout << "NO";
                return 0;
            }
        }

        for(i=0; s[i]; i++){
            if(s[i]!=t[i]) cnt+=1;
            if(cnt>2){
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
   //     for(i=0; i<30; i++) cout << a[i] << " " << b[i] << endl;
    }
    return 0;
}
