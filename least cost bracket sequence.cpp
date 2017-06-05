#include<bits/stdc++.h>
using namespace std;
bool isint(double f){
    return !(f - (double)(int)f);
}
int main(){
    double a, b, n;cin>>a>>b>>n;
    if(a == 0 && b == 0){
        cout<<"1"; return 0;
    }
    if(b / a >= 0){
        (isint(pow(b/a,1/n))) ? cout<<pow(b/a,1/n) : cout<<"No solution";
    }
    else{
        double T = - b/a;

        if((int)n % 2 == 0) cout<<"No solution";

        else{
            if(isint(pow( T,1/n))){
                cout<<-(pow(T ,1/n)) ;
            }
            else cout<<"No solution";
        }
    }
    return 0;
}
