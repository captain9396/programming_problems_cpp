#include<bits/stdc++.h>
using namespace std;

map<string, string > par;
map<string , bool > foo, bar;


int main(){
    int n;  cin>>n;
    string old , yng;
    while(n--){
        cin>>old >> yng;
        if(bar[old] == false){
            par[yng] = old;
        }

        else {
            par[yng] = par[old];
            par.erase(old);
            bar.erase(old);
        }
        bar[old] = true;
        bar[yng] = true;
    }
    cout<<par.size()<<endl;
    for(map<string, string > :: iterator it = par.begin(); it != par.end() ; it++){
        cout<<it->second<<" "<<it->first<<endl;
    }
    return 0;
}
