#include<bits/stdc++.h>
using namespace std;

int dx[] = {0 , 0 , 1 , -1};
int dy[] = {1 , -1, 0 , 0 };

char grid[55][55];
bool vis[55][55] , vis2[55][55];


int rows , col  ,cells;

bool check( int tx , int ty ){
  return (tx > 0 && tx < rows-1) &&(ty > 0 && ty < col-1);
}

void dfs2(int u , int v){
  vis2[u][v] = 1;
  grid[u][v] = '*';
  for(int i = 0 ; i < 4 ; i++){
    int tx = dx[i] + u;
    int ty = dy[i] + v;
    if(check(tx, ty) && grid[tx][ty] == '.' && !vis2[tx][ty])
      dfs2(tx, ty);
    }
}


bool islake ;

void dfs(int u ,int v){
  if(check(u , v) && grid[u][v] == '.'){
    if(!vis[u][v]){
      cells ++;
      vis[u][v] = 1;
      dfs(u , v + 1);
      dfs(u , v - 1);
      dfs(u + 1, v);
      dfs(u - 1, v);
    }
  }
  else if(check(u , v) == false && grid[u][v] == '.'){
    islake = false;
  }
}

struct data{
  int cell;
  int x,  y;
  data(int cell , int x , int y) : cell(cell) , x(x) , y(y){}
  bool operator<(const data& p)const {
    return cell < p.cell;
  }
};

int main(){
  int k, lakes = 0;
  cin >> rows >> col >> k;
  vector< data > answer;

  for(int i = 0 ; i < rows ; i ++) cin >> grid[i];
  for(int i = 1 ; i < rows -  1; i++){
    for(int j = 1; j < col - 1 ; j++){
      if(grid[i][j] == '.' && !vis[i][j]){
        islake = true;
        dfs(i , j);
        if(islake){
          lakes++;
          data T(cells , i , j);
          answer.push_back(T);
        }
        cells = 0;
      }
    }
  }

  sort(answer.begin() , answer.end());
  int value = 0;

  for(int i= 0 ; lakes > k ; i++){
    value += answer[i].cell;

    dfs2(answer[i].x , answer[i].y);

    lakes--;
  }

  cout << value << endl;
  for(int i  = 0 ;i  < rows ; i++) cout << grid[i]  <<endl;

  return 0;
}
