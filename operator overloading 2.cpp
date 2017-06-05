#include<bits/stdc++.h>
using namespace std;

class point{
  int* A;
  int pos;
public:
  point(int n) {
    A = new int[n];  pos = 0;
  }

  void At(int index){ cout << A[index] <<endl;}
  void PushBack(int n) { A[pos] = n ; pos++;  }


  int operator[](int index){
    return A[index];
  }



  ~point(){ delete [] A;}
};


int main(){
  point s(10);
  s.PushBack(56);s.PushBack(12);
  s.PushBack(36);

  s[0] = 10;
  return 0;
}
