#include<bits/stdc++.h>
using namespace std;

const int maxn = 1007;

char grid[maxn][maxn];
bool vis[maxn][maxn];
int color[maxn][maxn] ;
int row , col;
int state;
char arr[] = {'D' , 'I' , 'M' , 'A'};
int cntr;
bool cycle;

bool check(int x,  int y){
  return (x>=0 && x < row && y >=0 && y < col);
}

void dfs(int x , int y){
  if(!check(x , y) || grid[x][y] != arr[state % 4]) return;
  if(vis[x][y] ==1  && color[x][y] == 2){
    cycle = 1;
    cout << "cycle at : " << "(" << x <<',' << y << ")" << endl;
    return;
  }

  if( !vis[x][y] ){

    state++;

    vis[x][y] = 1;
    color[x][y] = 2;
    if(grid[x][y] == 'A') cntr++;
    dfs(x + 1 , y);
    dfs(x , y + 1);
    dfs(x - 1 , y);
    dfs(x , y - 1);

    color[x][y]= 3;
  }



}

int main(){

  cin >> row >> col;
  for(int i = 0 ; i < row ; i++) cin >> grid[i];
  for(int i = 0 ; i < row ; i++){
    for(int j = 0 ;j < col ; j++){
      if(!vis[i][j] && grid[i][j] == 'D' ){
        dfs(i , j);
      }
    }
  }


  if(cycle){
    cout << "Poor Inna!";
  }
  else if(!cntr){
    cout << "Poor Dima!";
  }
  else cout << cntr;

  return 0;
}
