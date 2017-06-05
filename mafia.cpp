#include<bits/stdc++.h>
using namespace std;
long long a[100005];
int main(){
    long long  n, mx = 0;cin>>n;
    for(int i=0; i<n; i++){
        scanf("%I64d", &a[i]);
        mx = max(mx, a[i]);
    }
    cout<<mx + 1;
    return 0;
}
