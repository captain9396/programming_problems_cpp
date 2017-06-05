#include<bits/stdc++.h>
#define PII pair<int,int>
#define ff first
#define ss second
using namespace std;

const int N = 8;

int d[N][N];
char com1[5] , com2[5];

int dx[] = {1,2,-1,-2,1,2,-1,-2};
int dy[] = {2,1,2,1,-2,-1,-2,-1};

void Bfs(int sx , int sy){
  memset(d , -1 , sizeof d);
  d[sx][sy] = 0;
  queue<PII>q;
  q.push(PII(sx,sy));
  while(!q.empty()){
    PII T = q.front();
    q.pop();
    for(int i = 0 ; i < 8  ; i ++){
      int tx = T.ff + dx[i] , ty = T.ss + dy[i];
      if(d[tx][ty] == -1){
        d[tx][ty] = d[T.ff][T.ss]  + 1;
        q.push(PII(tx,ty));
      }
    }
  }

  for(int i = 0 ; i < 8 ; i++){
    for(int j = 0 ; j < 8; j++){
      cout << d[i][j] << " ";
    }
    puts("");
  }
}

int main(){
  int test ;
  cin>>test;
  while(test--){
    scanf("%s" , com1);
    scanf("%s" , com2);
    int sx = com1[0] - 'a';
    int sy = com1[1] - '1';
    int ex = com2[0] - 'a';
    int ey = com2[1] - '1';
    cout << sx << ' ' <<sy << ' ' <<ex << ' ' <<ey << endl;
    Bfs(sx , sy);
    printf("%d\n" , d[ex][ey]);
  }
  return 0;
}
