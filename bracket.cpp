#include<bits/stdc++.h>
#define pch pair<char,int>
using namespace std;
stack<pair<char,int> > br;
stack<int>ind;
vector<int>sz;
int mx , cnt , mm;
int main(){
    string foo;
    cin>>foo;
    for(int i=0; foo[i]; i++){
        ind.push(i);
        if(foo[i] == ')'){
            if(br.empty()){
                continue;
            }
            else if((br.top()).first == '('){
                pch T = br.top();
                br.pop();
                mx = i - (T.second) + 1;
                sz.push_back(mx);
            }
            else mx = 0;
        }
        else{
            br.push(make_pair(foo[i] , i));
        }

    }
    if(sz.empty()) cout<<0<<' '<<1;
    else{
        sort(sz.begin(),sz.end());
        mm = sz[sz.size() - 1];
        for(int i=sz.size() - 1; i >= 0; i--){
            if(sz[i] < mm) break;
            else cnt++;
        }
        cout<<mm <<' '<<cnt;
    }
    return 0;
}
