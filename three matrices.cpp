#include<bits/stdc++.h>
using namespace std;

double mat[180][180] , A[180][180] , W[180][180];

int main(){
    int n ; cin>>n;
    for(int i = 0 ; i < n; i++) {
        for(int j = 0 ;  j < n ; j++) scanf("%lf" , &mat[i][j]);
    }

    for(int i = 0 ; i <  n ; i++){
        for(int j = 0  ; j < n ; j++){
            if( i == j){
                A[i][j] = mat[i][j];
                W[i][j] = 0;
            }
            else{
                A[i][j] = A[j][i] = (mat[i][j] + mat[j][i]) / 2;
                W[i][j] = mat[i][j] - A[i][j];
                W[j][i] = mat[j][i] - A[j][i];
            }
        }
    }

    for(int i = 0  ; i< n ; i++){
        for(int j  = 0 ; j < n ; j++) printf("%lf " , A[i][j]);
        printf("\n");
    }
    for(int i = 0  ; i< n ; i++){
        for(int j  = 0 ; j < n ; j++) printf("%lf " , W[i][j]);
        printf("\n");
    }
}
