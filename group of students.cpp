#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
    int m, s = 0; cin>>m;
    for(int i=0; i<m; i++){
        scanf("%d", &a[i]); s+=a[i];
    }
    int x, y; cin>>x>>y;
    int temp = 0;
    for(int i=1; i<=m; i++){
        temp+=a[i-1];
        if(((s - temp)>=x and (s - temp)<=y) and (temp>=x and temp<=y)){
            cout<<i + 1;
            return 0;
        }
    }
    cout<<0;
    return 0;
}
