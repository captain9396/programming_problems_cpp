#include<bits/stdc++.h>
#define PLL pair<long , long>
using namespace std;

typedef long long Long;

Long a[200007] , b[200007];

struct data{
    Long val , ind;
    bool operator <(const data& p) const{
    return val > p.val;
    }
}prop[200007];

Long sum;

int main(){
    int n ; cin>>n;
    data T;
    for(int i=0 ; i<n ;i++){
        scanf("%I64d%I64d" , &a[i] , &b[i]);
        T.val = b[i];
        T.ind = i;
        prop[i] = T;
        sum+=a[i];
    }
    sort(prop , prop + n);
    Long ind1 = prop[0].ind;
    Long ind2 = prop[1].ind;

    for(int i=0 ; i<n ;i++){
        if(ind1 == i){
            printf("%I64d " , (sum - a[i]) * prop[1].val);
        }
        else printf("%I64d " , (sum - a[i]) * prop[0].val);
    }
    return 0;
}
