#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int i, l, ind = -1, ind_2 = -1;
    string s;
    cin >> s;
    l = s.length();
    for(i=0; i<l-1; i++){
        if(s[i]=='A' && s[i+1]=='B') a[i] = 1;
        else if(s[i]=='B' && s[i+1]=='A') a[i] = 2;
    }
//    for(i=0; i<l; i++) cout << a[i] << " ";
//    cout << endl;
    for(i=0; i<l; i++) {
        if(a[i]==1){
            ind = i;
            break;
        }
    }
    if(ind >=2 && ind!=-1){
        for(i=ind-2; i>=0; i--){
            if(a[i]==2){
                cout <<"YES";
                return 0;
            }
        }
    }
    if(ind!=-1){
        for(i=ind + 2; i<=l; i++){
            if(a[i]==2){
                cout << "YES";
                return 0;
            }
        }
    }

    for(i=0; i<l; i++) {
        if(a[i]==2){
            ind_2 = i;
            break;
        }
    }

    if(ind_2 >=2 && ind_2!=-1){
        for(i=ind_2-2; i>=0; i--){
            if(a[i]==1){
                cout <<"YES";
                return 0;
            }
        }
    }

    if(ind_2!=-1){
        for(i=ind_2 + 2; i<=l; i++){
            if(a[i]==1){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
