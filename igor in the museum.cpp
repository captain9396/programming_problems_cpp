#include<bits/stdc++.h>
#define ff first
#define ss second
#define pii pair<int,int>
using namespace std;
const int N=1002;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n, m, k;
char grid[N][N];
int vis[N][N];
int v[N][N];
int pic[N][N];

inline int getnum()
{
    char c = getchar();
    int num,sign=1;
    for(;c<'0'||c>'9';c=getchar())if(c=='-')sign=-1;
    for(num=0;c>='0'&&c<='9';)
    {
        c-='0';
        num=num*10+c;
        c=getchar();
    }
    return num*sign;
}

inline void write(int x){
    if(x==0){putchar('0');return;}if(x<0)putchar('-'),x=-x;
    int len=0,buf[15];while(x)buf[len++]=x%10,x/=10;
    for(int i=len-1;i>=0;i--)putchar(buf[i]+'0');putchar('\n');return;
}

int bfs(int sx,int sy){
    int foo=0;
    vis[sx][sy]=1;
    if(grid[sx][sy+1]=='*') foo++;
    if(grid[sx][sy-1]=='*') foo++;
    if(grid[sx+1][sy]=='*') foo++;
    if(grid[sx-1][sy]=='*') foo++;
    queue<pii>q;
    q.push(pii(sx,sy));
    while(!q.empty()){
        pii tp = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int tx = tp.ff + dx[i];
            int ty = tp.ss + dy[i];
            if(vis[tx][ty]==0 && grid[tx][ty]=='.'){
                vis[tx][ty]=1;
                if(grid[tx][ty+1]=='*') foo++;
                if(grid[tx][ty-1]=='*') foo++;
                if(grid[tx+1][ty]=='*') foo++;
                if(grid[tx-1][ty]=='*') foo++;
                q.push(pii(tx,ty));
            }
        }
    }
    return foo;
}

void setpic(int sx,int sy, int k){
    v[sx][sy]=1;
    pic[sx][sy]=k;
    queue<pii>q;
    q.push(pii(sx,sy));
    while(!q.empty()){
        pii tp = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int tx = tp.ff + dx[i];
            int ty = tp.ss + dy[i];
            if(v[tx][ty]==0 && grid[tx][ty]=='.'){
                v[tx][ty]=1;
                pic[tx][ty]=k;
                q.push(pii(tx,ty));
            }
        }
    }
}
int main(){
    int x, y;
    n = getnum();
    m = getnum();
    k = getnum();
    for(int i=0; i<n; i++) cin>>grid[i];
    while(k--){
        x = getnum();
        y = getnum();
        if(pic[x-1][y-1]==0){
            int foo = bfs(x-1,y-1);
            //printf("%d\n", foo);
            write(foo);
            setpic(x-1,y-1,foo);
            //memset(vis, 0, sizeof vis);
        }
        else {
            write(pic[x-1][y-1]);
        }
    }
    return 0;
}
