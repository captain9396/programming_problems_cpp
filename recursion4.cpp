#include <bits/stdc++.h>
using namespace std;

void srs(int n, int k)
{
    if(k==n) return ;
 //   if(k==n-1) printf("x^%d", k);
    if(k==0) printf("1 + ");
    else if(k==1) printf("x + ");
    else if(k!=0 || k!=1){
        if(k==n-1) printf("x^%d ", k);
        else printf("x^%d + ",k);
    }
    return srs(n,k+1);
}
int main()
{
    int n;
    cin >> n;
    srs(n, 0);
    return 0;
}
