#include<bits/stdc++.h>
#define sii(a,b) scanf("%d%d", &a,&b)
using namespace std;
struct home{
    double x;
    double left, right;
};

bool compare(home a, home b){
    return a.x < b.x;
}

vector<home> h;

int main(){
    double foo ,bar;
    int ans= 0 ,n;
    double  t; cin>>n>>t;
    home var;
    for(int i=0; i<n; i++){
        scanf("%I64d%I64d", &foo,&bar);
        var.x = foo ;
        var.left = foo - (bar/2); var.right = foo + (bar/2);
        h.push_back(var);
    }
    sort(h.begin(), h.end(), compare);
    int sz = h.size();
    for(int i=0; i<sz-1; i++){
        if(h[i].right + t < h[i+1].left) ans+=2;
        else if(h[i].right + t == h[i+1].left) ans+=1;
    }
    cout<<ans + 2;
    return 0;
}
