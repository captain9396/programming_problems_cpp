#include<bits/stdc++.h>
using namespace std;

/// 4 1 2 3 5



int A[100];


int main(){
    int n;
    cin >> n;
    for(int i = 0 ;i < n ; i++){
        cin >> A[i];
    }

    for(int i = 0; i < n-1; i++){
        int t = A[i];
        for(int j = i-1 ; j >= 0 ; j--){
            if(t < A[j] && j > 0){
                A[j + 1] = A[j];
            }
            else{
                A[j] = t;
                break;
            }
        }

    }

    for(int i = 0; i < n ; i++) cout << A[i] << ' ';
    return 0;
}
