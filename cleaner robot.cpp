#include<bits/stdc++.h>
using namespace std;
char grid[12][12];
int vis[12][12];
int n,m, cnt;

void Dfs(int x, int y, char state){
    vis[x][y] = 1;
    if(state == 'U'){
        if(x-1>=0 && grid[x-1][y] == '.'){
            if(vis[x-1][y]==0)Dfs(x-1,y,'U');
            else return ;
        }
        else if(y+1<m && grid[x][y+1]=='.'){
            if(vis[x][y+1]==0) Dfs(x,y,'R');
            else return ;
        }
        else if(x+1<n && grid[x+1][y]=='.' ){
            if(vis[x+1][y]==0)Dfs(x,y,'D');
            else return ;
        }
        else if(y-1<m && grid[x][y-1]=='.' ){
            if(vis[x][y-1]==0)Dfs(x,y,'L');
            else return ;
        }
    }
    else if(state == 'D'){
        if(x+1<n && grid[x+1][y]=='.'){
            if(vis[x+1][y]==0)Dfs(x + 1,y,'D');
            else return ;
        }
        else if(y-1<m && grid[x][y-1]=='.'){
            if(vis[x][y-1]==0)Dfs(x,y,'L');
            else return ;
        }
        else if(x-1>=0 && grid[x-1][y] == '.'){
            if(vis[x-1][y]==0)Dfs(x,y,'U');
            else return ;
        }
        else if(y+1<m && grid[x][y+1]=='.'  ){
            if(vis[x][y+1]==0)Dfs(x,y,'R');
            else return ;
        }
    }
    else if(state == 'R'){
        if(y+1<m && grid[x][y+1]=='.'  ){
            if(vis[x][y+1]==0)Dfs(x,y+1,'R');
            else return ;
        }
        else if(x+1<n && grid[x+1][y]=='.' ){
            if(vis[x+1][y]==0)Dfs(x,y,'D');
            else return ;
        }
        else if(y-1<m && grid[x][y-1]=='.'){
            if(vis[x][y-1]==0)Dfs(x,y,'L');
            else return ;
        }
        else if(x-1>=0 && grid[x-1][y] == '.' ){
            if(vis[x-1][y]==0)Dfs(x,y,'U');
            else return ;
        }
    }
    else{
        if(y-1<m && grid[x][y-1]=='.'){
            if(vis[x][y-1]==0)Dfs(x,y-1,'L');
            else return ;
        }
        else if(x-1>=0 && grid[x-1][y] == '.'){
            if(vis[x-1][y]==0)Dfs(x,y,'U');
            else return ;
        }
        else if(y+1<m && grid[x][y+1]=='.' ){
            if(vis[x][y+1]==0)Dfs(x,y,'R');
            else return ;
        }
        else if(x+1<n && grid[x+1][y]=='.'){
            if(vis[x+1][y]==0)Dfs(x,y,'D');
            else return ;
        }
    }
}

int main(){
    cin>>n>>m;
    int F = 1;
    for(int i=0; i<n; i++) cin>>grid[i];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] == 'R' || grid[i][j] == 'L' || grid[i][j] == 'U' || grid[i][j] == 'D'){
                Dfs(i,j,grid[i][j]);
                F=0;
                break;
            }
            if(!F) break;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(vis[i][j]==1) cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
