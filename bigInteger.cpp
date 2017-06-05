#include<bits/stdc++.h>
using namespace std;

class BigInteger{
string c = "";
string foo = "";
string A = "";

public:

    BigInteger(string& anda){
        A = anda;
    }

string* get(int n){
    for(int i = 0 ; i< n ; i++) foo = foo + '0';
    return &foo;
}

string* add(string& a , string& b){

    int la = a.length() , lb = b.length();
    if(la > lb){
        b = *(get(la - lb)) + b;
    }
    else{
        a = *(get(lb - la)) + a;
    }

    int carry = 0;
    for(int i = a.length() - 1 ; i>=0 ; i--){
        int f1 = a[i] - '0';
        int f2 = b[i] - '0';
        c = (char)('0'+ ((f1 + f2 + carry)%10)) + c;
        if(f1 + f2 + carry> 10) carry = 1;
        else carry = 0;
    }
    if(carry){
        c= '1' + c;
        return &c;
    }
    else{
        return &c;
    }
}

string* operator+(const BigInteger& b){
    string* p = add(A , b.A);
    c = ""; foo = "";
    return p;
}
};

int main(){
    string a , b;
    cin >> a >> b;
    BigInteger big(a) , small(b);
//    for(int i = 0 ; i< 10 ; i++){
//        ans = ans*(big.add(ans , bal));
//    }

    cout << *(big + small);
    return 0;
}
