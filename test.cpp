#include<bits/stdc++.h>
using namespace std;


int main(){
    string foo = "main procasdfretsdf";
    cout << foo << endl;
    foo.replace(foo.find("ret" , 0) , 3 , "");
    cout << foo;
    return 0;
}
