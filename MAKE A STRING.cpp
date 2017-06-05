#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
vector<ll>E;
int tag = 1; ll s;
map<ll, int>foo;
int main(){
    ll a;
    int n;cin>>n;
    for(int i=0; i<n; i++){cin>>a; E.push_back(a);}
    sort(E.begin(), E.end());
    foo[E[0]] = tag++;
    s+=E[0];
    for(int i=1; i<n; i++){
        if(foo[ E[i] ] !=0 ){
            ll j;
            for(j=E[i]; j>0 && foo[j]!=0; j--);
            s+=j; foo[j] = tag++;
        }
        else {
            s+=E[i];
            foo[ E[i] ] = tag++;
        }
    }
    cout<<s;
}
