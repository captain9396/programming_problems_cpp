#include<bits/stdc++.h>
using namespace std;
long long foo[40];

long long solve(long long n){
    long long ans = (n*(n+1))/2;
    int i =0 ;
    long long ans2 = 0;
    while(foo[i]<=n){
        ans2+=foo[i];
        i++;
    }
    ans = ans - (2*ans2);
    return ans;
}


int main(){
    long long a=1;
    for(int i=0; i<35; i++){
        foo[i]=a; a<<=1;
    }
    int t;scanf("%d", &t);
    while(t--){
        long long  x;
        scanf("%I64d", &x);
        printf("%I64d\n" , solve(x));
    }
    return 0;
}
