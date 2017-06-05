#include<bits/stdc++.h>
#define max(a,b) (((a) > (b)) ? (a) : (b))
using namespace std;
/**
3 X 4

5 -1 6 -3
3  4 -5 7
2 -4 6  1

*/


long long  grid[101][101];
long long  dp[101][101];
long long  dp2[101][101];

long long fin = -(1 << 30);

int main(){
    int n , m ;
    cin >> n ;
    m = n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <=m ; j++){
            scanf("%lld" ,  &grid[i][j]);
            dp[i][j] = grid[i][j];
            dp[i][j] += dp[i][j-1];
        }
    }

    for(int i = 1 ;i <= m ; i ++){
        for(int j = 1; j <= n ; j++){
            dp[j][i] += dp[j-1][i];
        }
    }

//    for(int i = 1 ;i <= n; i++){
//        for(int j = 1; j <= m ; j++){
//            for(int k = i; k <= n ; k++){
//                for(int t = j ; t <= m  ; t++){
//                    if(i == k && t == j ){
//                        fin = max(fin , grid[i][j]);
//                        continue;
//                    }
//                    long long ans = 0;
////                    cout << "rectangle " << i << ' ' << j << " - "  << k << ' '<< t << ":" << endl;
//                    for(int x = i ; x <= k ; x++){
//                        ans += (dp[x][t] - dp[x][j-1]);
//                        fin = max(ans , fin);
//                    }
////                    cout << ans << ' ' << fin <<endl;
//                }
//            }
//        }
//    }
    cout << fin;

    return 0;
}
