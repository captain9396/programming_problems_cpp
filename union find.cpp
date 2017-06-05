#include<bits/stdc++.h>
using namespace std;

int a[100];
void Init(){
    for(int i=0; i<100; i++) a[i] = i;
}

void Union(int p, int q){
    if(a[p] == p) a[p] = q;
    else
}

int main(){
    Init();
    Union(1,2);

}
