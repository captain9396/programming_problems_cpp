#include<bits/stdc++.h>
#define PCI pair<char,int>
using namespace std;

vector<pair<char , int> >v;
vector<int>one, zero;
int mis , oo , zz;

int main(){
    string a,  b;
    cin>>a>>b;
    for(int i=0 ; a[i] ; i++){
        if(a[i] != b[i]){
            mis++;
            v.push_back(PCI(a[i] , i));
            if(a[i] == '1'){
                one.push_back(i);
                oo++;
            }
            else{
                zz++;
                zero.push_back(i);
            }
        }
    }

    if(mis % 2){
        cout<<"impossible";
    }

    else{
        if(oo == zz){
            for(int i=0  ;i<v.size() ; i++){
                a[v[i].second] = '1';
            }
            cout<<a;
        }

        else{
            if(oo > zz){
                if(oo % 2 == 0){
                    cout<<oo<<' '<<zz<<endl;
                        ///cout<<"abal";
                    int T = 1 , t = 0;
                    int SZ = one.size();
                    for(int i =  0 ; i < one.size() - zero.size(); i++){
                        (T) ? a[one[i]] = '1' : a[one[i]] = '0';
                        T^=1;
                        oo--;
                        t++;
                    }
                    cout<<one.size()<<' '<<zero.size()<<endl;
                    for(int i = t ; i<one.size() ; i++){
                        a[one[i]] = '1';
                        a[zero[i]] = '1';
                    }
                    cout<<a;
                }
                else {

                }
            }
        }
    }
}
