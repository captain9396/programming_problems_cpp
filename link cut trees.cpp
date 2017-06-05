#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll power(ll a, ll b){
    double aa = (double)a, bb = (double)b;
    double ans = power(a,b);
    return (ll)ans;
}

int main(){
    double l, r, k, foo, ans;
    cin>>l>>r>>k;
    int f=0;
    foo = ceil(log(l)/log(k));
    ans = pow(k,foo);
    for(double i=ceil(foo)+1; ans<=r; i++){
        f = 1;
        cout<<(ll)ans<<" ";
        ans = pow(k,i);
    }
    if(!f) printf("-1");
    return 0;
}
