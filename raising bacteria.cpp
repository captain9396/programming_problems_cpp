#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, x, k = 0;
  //  cin >> x;
    for(i=1, k=0; k<30; i+=1){
        if((i & (i-1)) == 0){
            k+=1;
            cout << i << " ";
        }
    }
   // cout << k;
    return 0;
}
