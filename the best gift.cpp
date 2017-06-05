#include<bits/stdc++.h>
#define Long long long
using namespace std;

Long  a[200007];
Long  mark[111];
Long s , total;

int main(){
    int n , m ; cin>>n>>m;

    for(int i  = 0 ; i < n ; i++){
        scanf("%I64d" , &a[i]);
        mark[a[i]]++;
    }

    for(int i = 0 ; i < 11 ; i ++){
        if(mark[i]) total+=mark[i];
    }

    for(int i = 1;  i<= 10 ;  i++){
        if(mark[i]){
            s+=mark[i]  *  (total - mark[i]);
            total-=mark[i];
        }
    }

    cout << s;

    return 0;
}
