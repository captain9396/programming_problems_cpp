#include<bits/stdc++.h>
using namespace std;

vector<int>foo;

int call(pair<int,int>& n , pair<int,int>& m , char a , char b , char c){
  int num1 , num2 , s;
  (a == '+') ? num1 = n.first + n.second : num1 = n.first * n.second;
  (b == '+') ? num2 = m.first + m.second : num2 = m.first * m.second;
  (c == '+') ? s = num1 + num2 : s = num1 * num2;
}

int main(){
  int a, b, c  , d ; cin>>a>>b>>c>>d;

  pair<int,int>P ,Q , R , U , V, W;
  P.first = a , P.second = b; U.first = c; U.second = d;
  Q.first = a , Q.second = c; V.first = b; V.second = d;
  R.first = a , R.second = d; W.first = b; W.second = c;

  char t, x, y; cin>>t>>x>>y;

  int A = call(P , U, t, x, y);
  int D = call(U , P, t, x, y);
  int B = call(Q , V, t, x, y);
  int E = call(V , Q, t, x, y);
  int C = call(R , W, t, x, y);
  int F = call(W , R, t, x, y);

  foo.push_back(A);foo.push_back(C);foo.push_back(E);
  foo.push_back(B);foo.push_back(D);foo.push_back(F);

  sort(foo.begin()  , foo.end());
  cout << foo[0];
  return 0;
}
