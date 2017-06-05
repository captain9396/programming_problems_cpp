#include <stdio.h>

char digits[100];
int N,i;
int main() {
scanf("%d",&N);
for (i=0; i<N; i++) {
    scanf("0.%[0-9]...",digits); // surprised?
    printf("the digits are 0.%s\n",digits);
  }
}
