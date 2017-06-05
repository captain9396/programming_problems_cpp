#include<bits/stdc++.h>
#define INF (1LL<<40)
using namespace std;
int a[105], tt;
vector<int>foo;
int main(){
    int n;cin>>n;
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i =0; i<n; i++){
        int s = 0;
        for(int j=0; j<a[i]; j++){
            scanf("%d", &tt);
            s+=tt;
        }
        s*=5;
        s+=(15*a[i]);
        foo.push_back(s);
    }
    sort(foo.begin(), foo.end());
    cout<<foo[0];
    return 0;
}
