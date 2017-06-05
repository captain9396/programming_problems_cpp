#include <bits/stdc++.h>
using namespace std;
vector<int>E[1005];
int main(){
    set<int>ss;
    int n; cin>>n;
    int s;
    set<int>::iterator it;
    for(int i =0 ; i<n; i++){
        scanf("%d", &s);
        ss.insert(s);
    }

    ss.erase(10);

    for(it = ss.begin(); it!= ss.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}
