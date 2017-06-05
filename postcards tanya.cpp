#include<bits/stdc++.h>
using namespace std;

map<int , int> ret;
int yay , whop;

int main(){
    string foo , bar;
    cin>>foo>>bar;
    for(int i = 0; bar[i] ; i++) ret[bar[i]]++;

    for(int i = 0; foo[i]; i++){
        if(ret[foo[i]]){
            yay++;
            ret[foo[i]]--;
        }
        else{
            if(ret[foo[i] + ('a' - 'A')]){
                ret[foo[i] + ('a' - 'A')]--;
                whop++;
            }
            else if(ret[foo[i] - ('a' - 'A')]){
                ret[foo[i] - ('a' - 'A')]--;
                whop++;
            }
        }
    }
    cout<<yay<<' '<<whop;
    return 0;
}
