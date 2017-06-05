#include <bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ,i , arr[1000] ,maxi ;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    maxi=arr[0];
    for(i=0;i<n;i++){
        if(maxi <arr[i]){
            maxi=arr[i];
        }

    }

    cout << maxi ;

    return 0;
}
