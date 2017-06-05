#include <bits/stdc++.h>
using namespace std;

int checkPrime(int n, int k)
{
    if(n==1) return 0;
    if(k==1) return 1;
    if(n%k==0) return 0;
    return checkPrime(n,k-1);
}


int main()
{
    int a[100], i = 0, n;
    while(1)
    {
        scanf("%d", &n);
        if(!n) break;
        else a[i] = checkPrime(n, sqrt(n)), i++;
    }
    int SIZE = i;
    for(i = 0; i<SIZE; i++){
        if(a[i]) printf("prime\n");
        else printf("not prime\n");
    }

    return 0;
}
