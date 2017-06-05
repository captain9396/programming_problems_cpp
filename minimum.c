#include <stdio.h>
int main ()
{
    int x , y , z , m1 , m2 ;
    printf("ENTER A NUMBER:");
    scanf("%d" ,&x );
  //  printf("ENTER A NUMBER:");
    scanf("%d" ,&y );
 //   printf("ENTER A NUMBER:");
    scanf("%d" ,&z );
    if(x > y){
        m1 = y;
    }
    else{
        m1 = x;
    }
    if(m1 > z){
        m2 = z;
    }
    else{
        m2 = m1;
    }
    printf("THE MINIMUM NUMBER IS:%d" , m2);
    return 0 ;
}
