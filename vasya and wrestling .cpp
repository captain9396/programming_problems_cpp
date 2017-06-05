#include<bits/stdc++.h>
using namespace std;
const int N = 200007;

long long  a[N] , A[N] , B[N];
int inda, indb;

int main(){
  int n ; cin>>n;
  long long  f = 0 , s = 0;
  for(int i=0  ;  i< n ; i++){
    scanf("%I64d", &a[i]);
    if(a[i] > 0){
      f+=a[i];
      A[inda++] = a[i];
    }
    else{
      s +=(-a[i]);
      B[indb++] = -a[i];
    }
  }

  if(f > s){
    cout<<"first";
  }
  else if(f < s){
    cout<<"second";
  }
  else{
    int fl = 1;
    for(int i=0 ; i<=min(inda,indb) ; i++){
      if(A[i] > B[i]){
        fl = 0;
        cout<<"first";
        return 0;
      }
      else if(A[i] < B[i]){
        fl = 0;
        cout<<"second";
        return 0;
      }
    }

    if(fl){
      if(inda > indb)cout<<"first";
      else if(inda < indb) cout<<"second";
      else{
        (a[n-1] > 0) ? cout<<"first" : cout<<"second";
      }
    }
  }
  return 0;
}
