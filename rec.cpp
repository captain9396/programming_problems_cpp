#include<bits/stdc++.h>
using namespace std;

void prin(int* a, int k){
    if(a[k]=='\0') return ;
    prin(a,k+1);
    printf("%d", a[k]);

}

int main(){
    int n; cin>>n;
    int a[100000];
    for(int i=0; i<n; i++) cin>>a[i];
    prin(a,0);
    return 0;
}
