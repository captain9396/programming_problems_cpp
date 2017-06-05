#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i , n, t;
    cin >> n >> t;
    if(n==1){
        if(t==10) cout << "0";
        else cout << t;
    }
    else{
        cout << "1";
        for(i=1 ; i<n-1; i++) cout << "0";
        cout << t-2;
    }
    return 0;
}
