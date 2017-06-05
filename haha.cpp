#include<bits/stdc++.h>
#define ff first
#define ss second
#define PII pair<int,int>
using namespace std;

int dx[] = {0 , 0 , 1 , -1 , 1,1,-1,-1};
int dy[] = {1 , -1 , 0 , 0 , 1 , -1 ,1, -1};

int cnt;
char grid[100][100];
bool vis[100][100];

void dfs(int sx , int sy ){
  vis[sx][sy] = true;
  if(grid[sx][sy] == 'X' ) grid[sx][sy] = '*';
  for(int i = 0 ; i < 8 ;i++){
    int tx = sx  + dx[i] , ty = sy + dy[i];
    if(grid[tx][ty] == '*' && vis[tx][ty] == false && tx >=0 && tx < 19 && ty >=0 && ty < 14){
      dfs(tx,ty);
    }
  }
}


int main(){



  memset(vis , false , sizeof vis);
  for(int i = 0 ; i < 19; i++) fin >> grid[i];

  for(int i = 0 ;i < 19 ; i++){
    for(int j = 0 ; j < 14 ; j++){
      if(grid[i][j] == '*' && vis[i][j] == false){
        ++cnt ;
        dfs(i , j);
      }
    }
  }

  cout  << cnt;

  return 0;
}
