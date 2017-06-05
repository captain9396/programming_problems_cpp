#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);
    string foo = "   ";
    int n, x, y;cin>>n;
    foo[n-1] = 'S';
    for(int i=0; i<3; i++){
        scanf("%d%d", &x,&y);
        swap(foo[x-1], foo[y-1]);
    }
    for(int i =0; i<3; i++){
    if(foo[i]=='S')printf("%d", i+1);
    }
    return 0;
}
