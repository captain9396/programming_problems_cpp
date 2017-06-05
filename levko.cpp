#include<bits/stdc++.h>
#define pii pair<int,int>
#define ff first
#define ss second
using namespace std;
int dx[] = {0,0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,-1,1};
string ds[] ={"U", "D","R","L","RU","RD","LD","LU"};
stack<string > foobar;
pii parent[10][10];
int d[10][10];
string com[10][10];
void grid(int sx, int sy){
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){ com[i][j] = "."; d[i][j] = -1;}
    }
    com[sx][sy] = "K";
    d[sx][sy] = 0;
    parent[sx][sy] = pii(-1,-1);
    queue<pii>q;
    q.push(pii(sx,sy));
    while(!q.empty()){
        pii tp = q.front();
        q.pop();
        for(int i=0; i<8 ; i++){
            int tx = tp.ff + dx[i]; int ty = tp.ss + dy[i];
            if(d[tx][ty]==-1 && tx>=0 && tx<8 && ty>=0 && ty<8){
                d[tx][ty] = d[tp.ff][tp.ss]  + 1;
                com[tx][ty] = ds[i];
                q.push(pii(tx,ty));
                parent[tx][ty] = pii(tp.ff, tp.ss);
            }
        }
    }
}

int main(){
    string foo , bar; cin>>foo>>bar;
    int sx, sy, tx, ty;
    sx = 8 - (foo[1] - '0'); sy = (foo[0] - 'A'); tx = 8 - (bar[1] - '0'); ty = (bar[0] - 'A');
    grid(sx,sy);
    pii temp = pii(tx,ty);
    while(temp!=pii(-1,-1)){
        foobar.push(com[temp.ff][temp.ss]);
        temp = parent[temp.ff][temp.ss];
    }

    while(!foobar.empty()){
        cout<<foobar.top()<<endl;
        foobar.pop();
    }
    return 0;

}
