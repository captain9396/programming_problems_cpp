#include<bits/stdc++.h>
#define pii pair<int,int>
#define ff first
#define ss second
using namespace std;
int dx[] = {0,0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,-1,1};
const int N = 1001;
bool mat[N][N];
vector<pii>q;
int n ;
bool check(int sx , int sy){
    int tx,ty;
    for(int i =0 ; i<8; i++){
        tx = sx + dx[i];ty = sy + dy[i];
        if(tx>=1 && tx <=n && ty>=1 && ty<=n && mat[tx][ty] == true)continue;
        else return false;
    }
    return true;
}

int main(){
    int x,y,m , F = 0;cin>>n>>m;
    for(int k =0 ; k<m; k++){
        scanf("%d%d",&x,&y);
        mat[x][y] = true;
        q.push_back(pii(x,y));
        for(int i=0 ; i<q.size(); i++){
            if(F == 0 ){
                if(check(q[i].ff, q[i].ss)){
                    cout<<k + 1;
                    F = 1;
                }
            }
        }
    }
    if(!F) cout<<-1;
    return 0;
}
