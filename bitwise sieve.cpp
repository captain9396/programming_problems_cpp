#include<bits/stdc++.h>
using namespace std;

int setbit(int n, int i){ return ((1<<(i-1)) | n);}

void printbits(int n){
    int m = 1 << 31;
    for(int i =0;  i<32; i++){
        if((m&n) == 0) putchar('0');
        else putchar('1');
        n = n<<1;
        if((i + 1)%4 == 0) putchar(' ');
    }
    cout<<endl;

}

int main(){
    int n ; cin>>n;
    //cout<<n<<endl;
    printbits(n);
    printbits(setbit(n, 10));
    return 0;
}
