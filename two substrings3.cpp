#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main()
{
    int i, k = 0, ind;
    string s;
    cin >> s;
    for(i=0; i<s.length() - 1; i++){
        if(s[i] == 'A' && s[i+1] == 'B') a[i] = 1;
        else if(s[i] == 'B' && s[i+1] == 'A') a[i] = 2;
    }
    for(i=0; i<s.length(); i++) cout << a[i] << " ";

   /* for(i=0; i<s.length() -1; i++){
        if(a[i]>0) {
            if(a[i]==1) k = 1;
            else k=2;
            ind = i;
            break;
        }
    }
    if(k==0) cout << "NO";

    else if(k==1){
        for(i=ind + 2; i<s.length(); i++){
            if(a[i]==2){
                cout<< "YES";
                return 0;
            }
        }
        cout << "NO";
        return 0;
    }

    else if(k==2){
        for(i=ind + 2; i<s.length(); i++){
            if(a[i]==1){
                cout<< "YES";
                return 0;
            }
        }
        cout << "NO";
        return 0;
    }*/
    return 0;
}
