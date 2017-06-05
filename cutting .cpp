#include<bits/stdc++.h>
using namespace std;

string foo;
queue<char> q;

int main(){

    cin>> foo;

    string bar = "CODEFORCES";

    int T = 0 ;

    for(int i = 0 ; foo[i] ;  i++){
        if(foo[i] == bar[T]){
            int cnt =  0 , k  = i ;
            while(foo[k] == bar[T]){
                T++ ;
                k++ ;
                cnt++ ;
            }
            if(cnt <= 1){
                T-=1;
            }
        }
    }

    if(T >= bar.length()) cout << "YES";
    else cout << "NO";

    return 0;
}
