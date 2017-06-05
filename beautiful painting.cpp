#include<bits/stdc++.h>
using namespace std;
int mn = 100000, mx = -1 , cnt;
vector<int>foo;
int a[1005];
int main(){
    int n, T ;cin>>n;
    for(int i=0; i<n; i++){
        scanf("%d", &T);
        a[T]++;
        mn = min(mn, T);
        mx = max(mx, T);
    }
    while(n){
        for(int i=mn; i<=mx; i++){
            if(a[i]){
                foo.push_back(i);
                n--;
                a[i]--;
            }
        }
    }
    for(int i=1; i<foo.size(); i++){
        if(foo[i] > foo[i - 1]) cnt++;
    }
    printf("%d", cnt);
    return 0;
}
