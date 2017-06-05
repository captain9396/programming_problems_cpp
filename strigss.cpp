#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string foo, bar;
    scanf("%d", &n);
    cin>>foo>>bar;
    if(bar=="week"){
        if(n==1) printf("52");
        else if (n==2) printf("52");
        else if (n==3) printf("52");
        else if (n==4) printf("52");
        else if (n==5) printf("53");
        else if (n==6) printf("53");
        else printf("52");
    }
    else {
        if(n==30) cout<<11;
        else if (n==31) cout<<7;
        else cout<<12;
    }
}
