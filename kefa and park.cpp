#include<bits/stdc++.h>
using namespace std;
const N = 100005;
vector<int>E[N];
int cat[N];



int main(){
    int n, m;
    for(int i=1; i<=n; i++) scanf("%d", &cat[i]);
    for(int i=0; i<n-1; i++){
        scanf("%d%d", &x,&y);
        E[x].push_back(y); E[y].push_back(x);
    }

}
