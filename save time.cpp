#include<bits/stdc++.h>
using namespace std;
int time(string foo){
    char bar[4]; int i;
    for( i=0; foo[i]; i++) bar[i] = foo[i];
    bar[i] = '\0';
    return atoi(bar);
}

int main(){
    string foo ; cin>>foo;
    int n; cin>>n;
    string bar = foo.substr(0,2);
    string yo = foo.substr(3,5);
    int var = n + time(yo);
    int ss = var%60; int cnt = n/60;
    if(cnt){
        int temp = time(bar);
        int fin = temp + cnt;
        int hr = fin%24;
        printf("%d:%2d" , hr, ss);
    }
    return 0;
}
