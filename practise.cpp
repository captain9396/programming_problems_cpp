#include <stdio.h>
int main ()
{
    int i , n , a[100];
    scanf("%d %d %d", &i,&n) ;
    for(i=0;i<n;i++){
        scanf("%d" , a[i]);
    }

    int x=4;
    for(i=0;i<n;i++){
        printf("%d", a[x]);
    }

    return 0 ;
}
