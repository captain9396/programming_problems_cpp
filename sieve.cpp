#include<bits/stdc++.h>
using namespace std;
const int N = 10000000;
int p[N];

void sieve(int n){
    p[1] = 1;
    for(int i =4; i <=n ; i+=2) p[i] = 1;
    for(int i=3; i*i<=n; i+=2){
        if(p[i] == 0){
            for(int j = i*i ; j<=n  ; j+=(2*i)) p[j] = 1;
        }
    }
}

void genprime(int n){
    for(int i=2; i<=n; i++){
        int f = 1;
        for(int j =2; j*j<=i; j++){
            if(i%j == 0){
                f= 0 ;
                break;
            }
        }
        if(f) printf("%d ", i);
    }
}

int main(){
    int n ;cin>>n;
    sieve(n);
    for(int i =1; i<=n; i ++){
        if(p[i] == 0) printf("%d ", i);
    }
   /* getchar();
    cout<<endl;
    genprime(n);*/
    return 0 ;
}
