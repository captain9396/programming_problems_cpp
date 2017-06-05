#include<bits/stdc++.h>
using namespace std;

int ret[222];
int yay , whop;

int main(){
    string foo , bar;
    cin>>foo>>bar;
    for(int i = 0; bar[i] ; i++) ret[bar[i]]++;

    for(int i = 0; foo[i]; i++){
        if(ret[foo[i]] > 0){
            ret[foo[i]]--;

            yay++;
        }
        else{
            if(ret[foo[i] + ('a' - 'A')] > 0){
                whop++;
            }
            else if(ret[foo[i] - ('a' - 'A')] > 0){
                whop++;
            }
        }
    }
    cout<<yay<<' '<<whop;
    return 0;
}
