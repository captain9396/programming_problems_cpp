#include<bits/stdc++.h>
#define max(a ,b) (((a) > (b)) ? (a) :(b))
#define Long long long
using namespace std;
const int maxn = 200;

Long dp[maxn][maxn];
Long A[maxn][maxn];

Long func(int i , int j , int en , int n){
	if(j < 1 || j > n) return 0;
	if(i == en +1  ) return 0;
	if(dp[i][j] != -1) return dp[i][j];
	return i < n ? dp[i][j] = A[i][j] + max(func(i+1 , j , en , n) , func(i+1 , j+1 , en  , n)) :
	    dp[i][j] = A[i][j] + max(func(i+1 , j , en , n) , func(i+1 , j-1 , en  , n))  ;
}

int main(){
	int test  , n;
	cin >> test ;
	for(int i = 1 ; i <= test ; i++){
		scanf("%d" , &n);
		memset(dp , -1 , sizeof dp);
		memset(A , 0  , sizeof A);
		for(int j = 1 ; j <= n; j++){
			for(int k = 1 ; k <= j; k++){
				scanf("%d" , &A[j][k]);
			}
		}
        int p = n - 1;
		for(int j = n + 1  ; j <= (n << 1) - 1 ; j++){
			for(int k = 1 ; k <= p ; k++){
				scanf("%d" , &A[j][k]);
			}
            p--;
		}
        printf("Case %d: %lld\n" ,i , func(1 , 1 , (2 * n)-1 , n ));
	}
	return 0;
}
