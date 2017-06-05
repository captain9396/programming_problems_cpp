#include<bits/stdc++.h>
using namespace std;
int foo[1010];

int pusnum(string bon){
   char str[10];
   int i;
   for(i=0; bon[i]; i++) str[i] = bon[i];
   str[i] = '\0';
   return atoi(str);
}
int main(){
    int temp, mx = -1;
    string bar, str = "";
    cin>>bar;
    bar  = bar + " ";
    for(int i=0; bar[i]; i++){
        if(bar[i]==',' || bar[i]==' '){
            temp = pusnum(str);
            foo[temp] = 1;
            str = "";
            if(temp > mx) mx = temp;
        }
        else str = str + bar[i];
    }

    int f = 1;
    for(int i=1; i<=mx+3; i++){
        if(foo[i]==1){
            if(foo[i+1] == 1 and f){
                printf("%d", i);
                int j = i;
                while(foo[j]==1) j++;
                if((j-1)!=mx)printf("-%d,", j-1);
                else printf("-%d" , j-1);
                f=0;
            }

            else if(f){
                if(i!=mx)printf("%d,",i);
                else printf("%d", i);
            }
        }
        else f=1;
    }
    return 0;
}
