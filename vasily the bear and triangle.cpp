#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,a;
    scanf("%I64d %I64d", &x, &y);
    if(x>0 && y>0){
        a=x+y;
        printf("0 %I64d %I64d 0", a,a);
    }
    else if(x<0 && y>0){
        a=-x+y;
        printf("%I64d 0 0 %I64d",-a,a);
    }
    else if(x>0 && y<0){
        a=x-y;
        printf("0 %I64d %I64d 0",-a,a);
    }
    else if(x<0 && y<0){
        a=-x-y;
        printf("%I64d 0 0 %I64d",-a,-a);
    }
    return 0;
}

