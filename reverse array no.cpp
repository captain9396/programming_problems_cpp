#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int x , i , arr[100], bat[100];
    cin >> x ;
    for(i=0;i<x;i++){
        cin >>arr[i];
    }
    for(i=0;i<x;i++){
        bat[i]=arr[i];
        cout << bat[i];
    }
    return 0 ;
}
