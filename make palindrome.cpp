#include<bits/stdc++.h>
using namespace std;
int main(){
    string foo;
    cin>>foo;
    int l  = foo.length();
    for(int  i = 0 ; i  < l / 2 ; i++){
        if(foo[i] != foo[l - 1- i]){
            char t = min(foo[i] , foo[l - 1 - i]);
            foo[i] =  foo[l - 1 - i] = t;
        }
    }
    cout << foo;
    return 0;
}
