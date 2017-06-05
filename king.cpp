#include<bits/stdc++.h>
using namespace std;
int dx[] = {0,0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,-1,1};
int d[100][100];

void grid(int sx, int sy){
    memset(d , -1, sizeof d);
    d[sx][sy] = 0;
    queue<pair<int,int> > q;
    q.push(make_pair(sx,sy));
    while(!q.empty()){
        pair<int,int> tp = q.front();
        q.pop();
        for(int i=0; i<8; i++){
            int tx = tp.first + dx[i];
            int ty = tp.second + dy[i];
            if(d[tx][ty] == -1 and (tx>=0 and tx<8) and (ty>=0 and ty<8)){
                d[tx][ty] = d[tp.first][tp.second] + 1;
                q.push(make_pair(tx,ty));
            }
        }
    }
}

int main(){
    grid(2,3);
    for(int i =0 ; i<8; i++){
        for(int j=0; j<8; j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
