#include <bits/stdc++.h>
using namespace std;

int a[200] , cnt;

int main(){
    string foo , bar  , mal , ans = ""; cin>>foo;
    bar = "ninetee";
    mal = "nineteen";

    for(int i = 0 ; foo[i] ;  i++) a[foo[i]]++;

    int len = bar.length();

    for(int i = 0 ; a['n'] || a['t'] || a['i'] || a['e'] ; i++){
        if(a[bar[i % len]]){
            a[bar[i % len]]--;
            ans = ans + bar[i % len];
        }
    }

//    cout <<ans<<endl;

    for(int i = 0  ; ans[i] ; i++){
        if(ans[i] == 'n'){
            int k = i;
            int f = 1;
            for(int j = 0 ; mal[j] ; j++ , k++){
                if(mal[j] != ans[k]){
                    f = 0  ;
                    break;
                }
            }
            if(f) cnt++;
        }
    }

    cout << cnt;

    return 0;
}
