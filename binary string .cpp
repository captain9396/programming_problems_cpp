#include<bits/stdc++.h>
#define max(a , b) (((a) > (b)) ? (a):(b))
#define _max(a , b, c, d) max(max(a , b) , max(c , d))
#define Long long long
using namespace std;

const int maxn = 3007;

Long dp[maxn][3][3];
Long A[maxn] , B[maxn] , C[maxn];


deque<int>v;
int D[] = {0 , 1};
int ans;
void print(int i , int n){
    if(i == 4){
        v.push_front(0);v.push_back(0);
        int anss = 0;
        for(int j = 1 ; j <= 4; j++){
            if(v[j-1] && v[j+1]) anss += C[j] ;
            else if(v[j-1] == 0 && v[j+1] == 0) anss+= A[j];
            else anss+= B[j];
        }
        ans = max(ans, anss);
        return;
    }
    else{
        for(int j = 0; j < 2; j++){
            v.push_back(D[j]);
            print(i + 1 , n);
            v.pop_back();
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <=n ; i++) scanf("%I64d" , &A[i]);
    for(int i = 1; i <=n ; i++) scanf("%I64d" , &B[i]);
    for(int i = 1; i <=n ; i++) scanf("%I64d" , &C[i]);
    print(0 , 4);
    cout << ans;
}
