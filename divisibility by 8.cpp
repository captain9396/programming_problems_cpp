#include<bits/stdc++.h>
using namespace std;

int num(string n){
  int  k = 0 , s = 0;
  for(int i =  n.length() - 1; i >=0 ; i--){
    s += pow(10 , k ) * (n[i] - '0');
    k++;
  }
  return s;
}

int ret(char a , char b , char c){
  char T[10]; T[0] = a, T[1] = b , T[2] = c; return atoi(T );
}

int ret(char a , char b){
  char T[10]; T[0] = a, T[1] = b; return atoi(T );
}

int main()
{
  string foo ; cin>>foo;
  int n = foo.length();

  if (n >= 1){
    for(int i = 0 ; foo[i] ; i++){
      if((foo[i] - '0') % 8 == 0){
        cout << "YES"<<endl;
        cout << foo[i];
        return 0;
      }
    }
  }

  if(n >= 2){
    for(int i = 0 ; i < n-1; i++){
      for(int j = i + 1; j < n ; j++){
        int A = ret(foo[i] , foo[j]);
        if(A % 8 == 0){
          cout << "YES"<<endl;
          cout << A;
          return 0;
        }
      }
    }
  }

  if(n >= 3){
    for(int i = 0 ; i < n-2; i++){
      for(int j = i + 1; j < n-1 ; j++){
        for(int k = j + 1 ; k < n ; k++){
          int A = ret(foo[i] , foo[j] , foo[k]);
          if(A % 8 == 0){
            cout << "YES"<<endl;
            cout << A;
            return 0;
          }
        }
      }
    }
  }

  cout << "NO";


  return 0;
}
