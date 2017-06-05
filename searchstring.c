#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i, j, k, f;
    char str[100], ss[50];
    scanf("%s", str);
    scanf("%s", ss);
    for(i=0  ; i<=strlen(str)-strlen(ss)  ; i++){
        if(str[i] == ss[0]){
            f = 1;
            for(j=i, k = 0; k<strlen(ss); j++, k++){
                if(str[j] != ss[k]){
                    f = 0;
                    break;
                }
            }
            if(f){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}

