#include<bits/stdc++.h>
using namespace std;
int a[1010];
int cnt;
int main(){
    int n,x,y;cin>>n;
    while(n--){
        scanf("%d%d", &x,&y);
        if(a[x] == 0)cnt++;
        a[y] = 1;
    }
    if(cnt > 1)cout<<cnt;
    else cout<<0;
    return 0;
}
