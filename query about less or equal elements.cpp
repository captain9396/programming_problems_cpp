#include<bits/stdc++.h>
#define Long long long
using namespace std;

Long a[200007] ,  b[200007] , b2[200007];
map<Long, Long>foo;

int main(){
    int n  ,  m ; cin>>n >>m;
    for(int i = 0 ; i < n ; i ++) scanf("%I64d" ,  &a[i]);
    for(int i = 0 ; i < m ; i++){
        scanf("%I64d"  , &b[i]);
        b2[i] = b[i];
    }
    sort(a  , a+ n);
    sort(b  , b + m);
    int j  = 0;
    for(int i = 0  ; i < m ; i++){
        while(j < n && a[j] <= b[i]) j++;
        foo[b[i]] = j;
    }
    for(int i =  0 ; i< m ; i++)printf("%I64d " , foo[b2[i]]);
    return 0;
}
