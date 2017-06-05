#include<bits/stdc++.h>
#define ff first
#define ss second
#define pii pair<int,int>
using namespace std;
const int N=505;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
char maze[N][N];
int vis[N][N];
int gap;
void dfs(int sx,int sy){
    vis[sx][sy]=1;
    for(int i=0; i<4; i++){
        int tx=sx+dx[i];
        int ty=sy+dy[i];
        if(vis[tx][ty]==0 && maze[tx][ty]=='.'){
            gap++;
            dfs(tx,ty);
        }
    }
}
vector<pii>dot;
int main(){
    int cnt = 0;
    int n, m , k;cin>>n>>m>>k;
    for(int i=0; i<n ;i++){
        for(int j=0; j<m;j ++){
            scanf(" %c", &maze[i][j]);
            if(maze[i][j]=='.') cnt++;
        }
    }

    for(int i=0; i<n && k; i++){
        for(int j=0; j<m && k;j ++){
            memset(vis, 0, sizeof vis);
        }
    }


    return 0;
}
