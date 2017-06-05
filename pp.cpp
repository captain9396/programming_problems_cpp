#include<bits/stdc++.h>
#define pii pair<int,int>
#define ff first
#define ss second
#define repi(I,K) for(int i=I; i<K; i++)
#define repj(I,K) for(int j=I; j<K; j++)
using namespace std;
const int N=100;
int dx[] = {0,0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,-1,1};
int grid[N][N];

void bfs(int sx, int sy){
    memset(grid, -1, sizeof grid);
    grid[sx][sy] = 0;
    queue<pii>q;
    q.push(pii(sx,sy));
    while(!q.empty()){
        pii tp = q.front();
        q.pop();
        for(int i=0 ; i<8; i++){
            int tx = tp.ff + dx[i];
            int ty = tp.ss + dy[i];
            if(grid[tx][ty] ==-1 and tx >=0 and tx <8 and ty >=0 and ty<8){
                q.push(pii(tx,ty));
                grid[tx][ty] = grid[tp.ff][tp.ss] + 1;
            }
        }
    }
}

int main(){
    bfs(3,4);
    repi(0,8){
    repj(0,8) printf("%d ", grid[i][j]);
    cout<<'\n';
    }
    return 0;
}
