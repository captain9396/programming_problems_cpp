#include<bits/stdc++.h>
using namespace std;

const int maxn = 2000007;

bool prime[maxn];
int A[1005];
int ind = -1;
int d[1005];

int main(){
    ios_base::sync_with_stdio(0) ; cin.tie(0) ; cout.tie(0);
    for(int i = 4 ; i < 2000005; i+=2) prime[i] = 1;
    for(int i = 3; i * i<= 2000005 ; i+= 2){
        if(prime[i] == false){
            for(int j = i * i ; j <= 2000005 ; j+= (2* i)){
                prime[j] = 1;
            }
        }
    }
    int n ;
    cin >> n;
    for(int i = 1 ; i <= n;  i++) cin >> A[i];

    sort(A , A + n + 1);
    for(int i = n; i >= 1 ; i--){
        int ans = 0;
        for(int j = i ; j <= n ; j++){
            if(prime[A[]])
        }
    }
    return 0;
}
