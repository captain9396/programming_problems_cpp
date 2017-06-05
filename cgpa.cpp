#include<bits/stdc++.h>

using namespace std;

double A[] = {19.5 , 20.5 , 21.25 , 20.25 , 20.5, 20.5, 19.25 , 18.25};
double G[] = {3.78 , 3.34 , 3.03 ,4 , 4, 4 , 4 ,4 };
double tot;
double now;

int main(){

  for(int i= 0  ; i < 8 ; i++){
    now += A[i] * G[i];
  }

  cout << now / 160;
  return 0;
}
