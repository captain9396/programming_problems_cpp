#include<bits/stdc++.h>
using namespace std;
const int N=22;
int dx[]={0,0,1,-1}, dy[]={1,-1,0,0};
char grid[N][N];
int vis[N][N];
int foo, row, col;
void dfs(int sx, int sy){
    vis[sx][sy]=1;
    for(int i=0; i<4; i++){
        int tx = sx+dx[i], ty=sy + dy[i];
        if(vis[tx][ty]==0 && grid[tx][ty]=='.'){
            if(tx==0 || ty==0 || tx==row-1 || ty==col-1) foo++;
            dfs(tx,ty);
        }
    }
}

int main(){
    int tc ; cin>>tc;
    while(tc--){
        foo = 0;
        memset(vis, 0, sizeof vis);
        int f = 1;
        cin>>row>>col;
        for(int i=0; i<row; i++)cin>>grid[i];
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j]=='.'){
                    dfs(i,j);
                    if(i==0 || j==0 || i==row-1 || j==col-1) foo++;
                    f=0;
                    break;
                }
            }
            if(!f) break;
        }
        if(foo==2) printf("valid\n");
        else printf("invalid\n");
    }
    return 0;
}
