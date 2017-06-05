#include<bits/stdc++.h>
using namespace std;

string foo , bar;
int pls1 , pls2 , min1 , min2 , q;
double dp[100];

double fact(double a){
  if(a == 0) return 1;
  return dp[int(a)] = a * fact(a - 1);
}

int main(){
  cin>>foo>>bar;
  for(int i = 0 ; foo[i]; i++){
    if(foo[i] == '+') pls1++;
    else  min1++;

    if(bar[i] == '+') pls2++;
    else if(bar[i] == '-') min2++;
    else q++;
  }
  if(pls1 < pls2 || min1 < min2) cout << fixed <<setprecision(12) << 0.0;

  else{
    double tot = pow(2, q);
    double pos = fact(q) / (fact(pls1 - pls2) * fact(min1 - min2));
    cout << fixed<<setprecision(12) << pos / tot;
  }
  return 0;
}
