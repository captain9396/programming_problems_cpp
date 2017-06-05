#include<bits/stdc++.h>
#define MAX(A,B) (A > B) ? (A) : (B)
using namespace std;
typedef long long ll;
const int N = 1010;
string foo[N];
ll a[N];
map<string, ll >bon , bar;
ll mx = -1000000;
int main(){
    int n ;cin>>n;
    for(int i = 0 ; i<n; i++){
        cin>>foo[i];
        scanf("%I64d" , &a[i]);
        bon[foo[i]]+=a[i] ;
    }
    for(map<string,ll>::iterator it = bon.begin(); it!=bon.end(); it++){
        if(it->second > mx) mx = it->second;
    }
    for(int i =0; i<n ; i++){
        if(bon[foo[i]] == mx){
            bar[foo[i]]+=a[i];
        }
        if(bar[foo[i]] == mx) {
            cout<<foo[i];
            return 0;
        }
    }
    return 0;
}
