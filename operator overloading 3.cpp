#include<bits/stdc++.h>

using namespace std;

class Base{
  int a , b;

public:
  Base() { a = b = 0; }
  Base(int x , int y){ a = x ; b = y; }
  int getA() { return a;}
  int getB(){ return b;}

  Base operator+(const Base& p);
  Base operator-(const Base& p);
  Base operator-();
  Base operator++();
  Base operator++(int p);

  void show(){ cout << a << ' ' << b <<endl; }
};

Base Base::operator+(const Base& p){
  Base T(a + p.a , b + p.b); return T;
}
Base Base::operator-(const Base& p){
  Base T(a - p.a , b - p.b); return T;
}
Base Base::operator-(){
  a = -a ; b = -b ; return *this;
}
Base Base::operator++(){
  ++a;  ++b ; return *this;
}
Base Base::operator++(int p){
  a++;  b++ ; return *this;
}




class Derived : public Base{

public:
  Derived() { }
  Derived(int n , int m) : Base(n  , m) { }
  Derived operator+(Derived& p){
    Derived T(getA() + p.getA() , getB() + p.getB()); return T;
  }
};


int main(){
  Derived x(1 ,3) , y(7 ,8);
  Derived T;
  T = x + y;
  T.show();

  return 0;

}







