#include<bits/stdc++.h>
#define Long long long
using namespace std;

Long bigmod(Long b , Long m){
    if(b < m) return b;
    return ((2%m) * ( (b/2)%m ) ) % m ;
}

int main(){
    Long b , m;
    cin >> b >> m;
    cout << bigmod(b  , m );
    return 0;
}
