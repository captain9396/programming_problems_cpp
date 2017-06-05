#include<bits/stdc++.h>
#define max(a ,b) (((a) > (b)) ? (a) :(b))
#define Long long long
using namespace std;
const int maxn = 105;

Long dp[maxn][maxn];
Long A[maxn][maxn];

Long func(int i , int j , int n){
	if(j < 1 || j > n) return 0;
	if(i == n + 1) return 0;
	if(dp[i][j] != -1) return dp[i][j];
	Long a = 0;
	cout << "at " << i << " " << j << '\n';  
	if(i < n) return dp[i][j] = A[i][j] + max(func(i+1 , j , n) , func(i+1 , j+1 , n));
	else dp[i][j] = A[i][j] + max(func(i+1 , j , n) , func(i+1 , j-1 , n));
}

int main(){
	int test  , n;
	cin >> test ;
	for(int i = 1 ; i <= test ; i++){
		scanf("%d" , &n);
		memset(dp , -1 , sizeof dp);
		for(int j = 1 ; j <= n; j++){
			for(int k = 1 ; k <= j; k++){
				scanf("%d" , &A[j][k]);
			}
		}
		for(int j = n -1  ; j >= 1; j--){
			for(int k = 1 ; k <= j; k++){
				scanf("%d" , &A[j][k]);
			}
		}
		printf("Case %d: %I64d\n" ,i , func(1 , 1 , (2 * n)-1) );
	}
	return 0;
}
