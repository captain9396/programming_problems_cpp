#include<bits/stdc++.h>
#define Long long long
using namespace std;

Long a[1111] , ans[1111];


int main(){
    int n ; cin>>n;

    for( int i = 0; i < n ; i++){
        scanf("%I64d" , &a[i]);
    }

    sort(a , a + n);

    int  j  , i , k;
    for(i = 0 , j = 0; i < n; i+=2 , j++) ans[i] = a[j];

    for(i = 1 ,  k = n-1 ; i < n ; i+=2,  k--) ans[i] = a[k];

    for(int i = 0; i < n ; i++) printf("%I64d " , ans[i]);

    return 0;
}
