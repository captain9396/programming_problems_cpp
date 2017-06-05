#include <stdio.h>
int main()
{

    double i = 1 , sum = 0 , n;
    scanf("%lf", &n);


    while(i<=n){
        sum = sum + (i/(i+1));
        i++;
    }

    printf("%lf", sum);
    return 0;
}
