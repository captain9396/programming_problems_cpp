#include <stdio.h>

int main ()
{
    int n;
    scanf("%d",&n);
    if(n==2){
        printf("NO\n");
    }
    else if (n % 2 !=0){
        printf("NO\n");
    }
    else{
        printf("YES!");
    }
    return 0;
}
