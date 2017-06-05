#include<bits/stdc++.h>
#define pii pair<int,int>
#define ff first
#define ss second
using namespace std;
int dx[] = {0,0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,-1,1};
int d[100][100];
void chess(int sx, int sy){
    memset(d, -1,sizeof d);
    d[sx][sy] = 0;
    queue<pii>q;
    q.push(pii(sx,sy));
    while(!q.empty()){
        pii tp = q.front();
        q.pop();
        for(int i=0; i<8; i++){
            int tx = tp.ff + dx[i];
            int ty = tp.ss + dy[i];
            if(d[tx][ty] == -1 and tx>=0 and tx < 8 and ty>=0 and ty<8){
                d[tx][ty] = d[tp.ff][tp.ss] + 1;
                q.push(pii(tx,ty));
            }
        }
    }
}
int main(){
    chess(3,3);
    for(int i=0; i<8; i++){
        for(int j =0 ; j<8; j++) cout<<d[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
