#include<bits/stdc++.h>
using namespace std;

class Complex{
  int x  , y;
public:
  Complex() { }
  Complex(int a , int b){ x = a ; y = b;}

  Complex operator+(Complex& Z);
  Complex operator-(Complex& Z);
  Complex operator*(Complex& Z);

  Complex getConjugate(Complex& Z);
  Complex getPolar(Complex& Z);
  Complex getCartesian(Complex& Z);

  void showCartesian();
  void showPolar();
};

Complex Complex :: operator+(Complex& Z){
  Complex T;
  T.x = x + Z.x ; T.y = y + Z.y;
  return T;
}

Complex Complex :: operator-(Complex& Z){
  Complex T;
  T.x = x - Z.x ; T.y = y - Z.y;
  return T;
}

///(a + bi)(c + di) = (ac - bd) + i(ad + bc)

Complex Complex :: operator*(Complex& Z){
  Complex T((x * Z.x) - (y * Z.y) , (x * Z.y) - (y * Z.x));
  return T;
}



int main(){
  Complex u(1,2) , v(1,2);
}
