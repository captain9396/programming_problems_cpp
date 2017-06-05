#include<bits/stdc++.h>
using namespace std;
int main(){
    long long m, n;cin>>n>>m;
    long long a=1, b=1 , ans = 0;
    while(a || b){
        a = min(n, m/2);
        b = min(m, n/2);
        ans+=max(a,b);
        a = n;
        b = m;
    }
    cout<<ans;
    return 0;
}
