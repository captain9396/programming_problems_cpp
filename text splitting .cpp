#include<bits/stdc++.h>
using namespace std;

bool isint(double x){ return (x - (double)(int)x) ;}

int main(){
    int n , m , k , x = 0 , y = 0 , flag = 0;
    cin>>n>>m>>k;

    string foo;
    cin>>foo;

    double T;

    for(int i = 0 ; i<= n ; i++){
         T = ((double)n - ((double)m * (double)i)) / (double)k;
        if(isint(T) && T){
             x = i;
             y = (int)T;
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        cout << -1;
        return 0;
    }

    else{

        cout << x + y<<endl;
        int i ;
        for(i = 0 ; x ; i++){
            printf("%c" , foo[i]);
            if((i + 1) % m == 0){
                printf("\n");
                x--;
            }
        }

        int cnt = 1;
        for(int j = i; y ; j++ , cnt++){
            printf("%c" , foo[j]);
            if(cnt % k == 0){
                printf("\n");
                y--;
            }
        }
    }
    return 0;

}
