#include <bits/stdc++.h>
using namespace std;

int sumara(int ara[], int n)
{
    if(n==0) return ara[0] ;
    return ara[n] + sumara(ara, n-1);
}
int main()
{
    int ara[10];
    for(int i=0; i<10; i++) cin >> ara[i];
    cout << sumara(ara,9);

    return 0;

}
