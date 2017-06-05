#include<bits/stdc++.h>
using namespace std;
set<set<int> >bar;
int main(){
    string s, t;
    int n, a, b, c,d; cin>>n;
    for(int i =0; i<n ; i++){
        cin>>s>>t;
        getchar();getchar();
        set<int>foo;
        foo.insert(s[0] - '0');
        foo.insert(s[1] - '0');
        foo.insert(t[0] - '0');
        foo.insert(t[1] - '0');
        bar.insert(foo);
    }
    cout<<bar.size();
}
