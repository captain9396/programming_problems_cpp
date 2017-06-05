#include<bits/stdc++.h>
using namespace std;
const int N = 200007;
typedef long long Long;

Long a[N] , b[N] , c, d;

int main(){
    int n , m;
    cin>>n;
    for(int i=0; i<n; i++)scanf("%I64d", &a[i]);
    cin>>m;
    for(int i=0; i<m; i++)scanf("%I64d", &b[i]);
    sort(a,a+n);
    for(int i=0; i<m; i++ ){
        if(b[i] < a[0]) c++;
        else d++;
    }
    cout<<n*3<<':'<<
    pair<int,int>foo , bar;
    foo.first = n*3 ;
    foo.second = (c*2)+ (d * 3);


    return 0;
}
