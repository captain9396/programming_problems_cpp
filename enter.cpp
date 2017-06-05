#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int i, n, l[100], maximum;
    cin >> n ;
    for(i=0; i<n ; i++){
        cin >> l[i];
    }
    maximum = l[i];
    for(i=0; i<n ;i++){
        if(l[i]>maximum){
           maximum = l[i];
        }
    }
    cout << maximum ;

    return 0 ;
}
