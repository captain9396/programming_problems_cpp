#include<bits/stdc++.h>
#define ABS(A) (A < 0) ?  -(A) : A
using namespace std;
typedef long long ll;
ll a[2*100005], pos[2*100005], s;
int main(){
    int n;cin>>n;
    for(int i=0; i<n;i ++){
        scanf("%I64d", &a[i]);
        pos[a[i]]= i;
    }
    for(int i=2; i<=n ; i++) s+=(ABS(pos[i] - pos[i-1]));
    cout<<s;
    return 0;
}
