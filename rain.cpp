#include<bits/stdc++.h>
#define PI acos(-1)
using namespace std;

int main(){
  double d , h , v, e;
  cin>>d >> h >> v>> e;
    cout << fixed << setprecision(12)  <<PI<<endl;
      double r  = d / 2;
    double vol = PI * r *r * e;
      cout << "YES"<<endl;
      cout << fixed << setprecision(12) << (v - vol) * ( PI * r * r * h);




  return 0;
}
