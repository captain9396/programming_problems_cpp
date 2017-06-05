#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, must;
    cin >> a >> b;
    must = a;
    while(1){
        if(a<b) break;
        a = a/b;
        must+=a;
    }
    cout <<  must;
    return 0;
}
