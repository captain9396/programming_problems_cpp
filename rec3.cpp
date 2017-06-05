#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int power(int x, int n){
    if(n==0) return 1;
    int mul = x * power(x,n-1);
    return mul;
}


int main(){
    int x,n;cin>>x>>n;
    cout<<power(x,n);

    return 0;
}
