#include<bits/stdc++.h>
using namespace std;

const int N = 1111;
stack<int>ind[N];
map<int,bool>foo;
int a[N];

int main(){
    int n; cin>>n;
    for(int i=0; i <n; i++){
        scanf("%d", &a[i]);
        foo[a[i]] = true;
        ind[a[i]].push(i);
    }
    for(int i=0 ; i<n ; i++){
        for(int j =0;  j<n ;j++){
            if(foo[a[i] + a[j]] && i!=j){
                cout<<ind[a[i] + a[j]].top() + 1<<' '<<i+1<<' '<<j+1;
                return 0;
            }
        }
    }
    cout<<-1;
    return 0;
}
