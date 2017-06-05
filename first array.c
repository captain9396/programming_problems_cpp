#include <stdio.h>
int main ()
{
     int ft_marks, st_marks, final_marks;
     double total_marks;
     ft_marks = 100;
     st_marks = 73;
     final_marks = 100;
     total_marks = ft_marks / 4.0 + st_marks / 4.0 + final_marks / 2.0;
     printf("%0.0lf\n", total_marks);
     return 0;

}
