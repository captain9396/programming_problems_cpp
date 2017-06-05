#include<bits/stdc++.h>
using namespace std;
const int N=502;
int n, m;
char grid[N][N];
int vis[N][N], cnt[N][N];
int dx[]={0,0,1,-1}, dy[]={1,-1,0,0};
void dfs(int sx,int sy){
    vis[sx][sy]=1;
    for(int i=0; i<4; i++){
        int tx = sx+dx[i], ty = sy + dy[i];
        if(tx>=0 && tx<n && ty>=0 && ty<m){
            if(vis[tx][ty]==0)
                dfs(tx,ty);
            else if (vis[tx][ty]==1 &&  grid[tx][ty]=='.') cnt[tx][ty]++;
        }
    }
}
int main(){
    cin>>n>>m;
    for(int i=0; i<n; i++) cin>>grid[i];
    int r1,c1, r2,c2;
    cin>>r1>>c1;
    cin>>r2>>c2;
    char temp = grid[r2-1][c2-1];
    if(temp=='X') grid[r2-1][c2-1] = '.';
    dfs(r1-1,c1-1);
    if(vis[r2-1][c2-1]){
        if(temp=='.' && cnt[r2-1][c2-1]>1)cout<<"YES";
        else if(temp=='X') cout<< "YES";
        else cout<<"NO";
    }

    else cout<<"NO";
    return 0;
}
