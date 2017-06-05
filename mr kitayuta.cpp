#include<bits/stdc++.h>
using namespace std;
string a[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
int main(){
    string s;
    cin>>s;

    int l = s.length();
    for(int i=0; i<=l ; i++){
        for(int j=0; j<26; j++){
            string foo = s;
            string bar = a[j];
            foo.insert(i, bar);
            int lln = foo.length(), F = 1;
            for(int k=0; k<lln/2; k++){
                if(foo[k] != foo[lln - 1 - k]){
                    F = 0;
                    break;
                }
            }
            if(F){
                cout<<foo;
                return 0;
            }
        }
    }
    cout<<"NA";



    return 0;
}
