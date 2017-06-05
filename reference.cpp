#include<bits/stdc++.h>
using namespace std;
class cop{

public:
    int x , y;
    cop(int i, int j)
    {
        x = i; y  =j;
    }
    void show(){
        cout<<x<<endl;
    }
};

int add(cop& v){
    return v.x + v.y;
}

int main(){
    cop a(234,55);
    cout<<add(a);
    return 0;
}
