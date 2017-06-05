#include<bits/stdc++.h>
using namespace std;

string foo = "ROYGBIV";


string bar = "";
int main(){
    int n;cin>>n;
    for(int i=0; i<n; i++) bar = bar + foo[i%7];
        if(bar[n-1]=='R') {
            bar[0] = 'B'; cout<< bar;
        }
        else if(bar[n-1]=='O'){
            swap(bar[n-1], bar[n-3]);
            bar[0] = 'B';
            cout<<bar;
        }
        else if(bar[n-1]=='Y'){
            bar[n-1] = 'I';bar[n-2] = 'B';bar[n-3] = 'G';
            cout<<bar;
        }
        else{
            cout<<bar;
        }

    return 0;
}
