#include<bits/stdc++.h>
using namespace std;
const int N = 2000000;

int a[N] , T ,mx;

int main(){
    int n ; cin>>n;
    for(int i = 0 ; i< n; i++){
        scanf("%d" , &T);
        a[T] = T;
    }


    for(int i = 0; i<=N; i++){
        if(a[i] == 0) a[i] = a[i - 1];
    }

    for(int i = 2; i<= N ; i++){
        if(a[i] == i){
            for(int j = (2 * i )- 1 ; j <= N ; j+=i){
                mx = max(mx , a[j] % i);
            }
        }
    }

    cout << mx;
    return 0;
}
