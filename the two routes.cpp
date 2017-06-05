#include <bits/stdc++.h>
using namespace std;
int mat[500][500];
vector<int>R[100000], B[100000];
int dr[10000], db[10000];
int main(){
   // memset(m, -1, sizeof m);
    int n, m;cin>>n>>m;
    int x,y;
    for(int i=0 ; i<m; i++){
        scanf("%d %d", &x, &y);
        mat[x][y] = 1; mat[y][x] = 1;
        R[x].push_back(y);R[y].push_back(x);
    }

    dr[1] = 0;
    queue<int>b;
    b.push(1);
    while(!b.empty()){
        int tp = b.front(); b.pop();
        for(int i=0; i<R[tp].size(); i++){
            if(dr[R[tp][i] ] == 0){
                dr[R[tp][i]] = dr[tp] + 1;
                b.push(R[tp][i]);
            }
        }
    }
    if(dr[n]==0){
        printf("-1");
        return 0;
    }

    for(int i=1 ; i<=n; i++){
        for(int j =1; j<=n; j++){
            if(mat[i][j] == 0 and i!=j){
                B[i].push_back(j); B[j].push_back(i);
            }
        }
    }

    db[1] = 0;
    queue<int>q;
    q.push(1);
    while(!q.empty()){
        int tp = q.front();
        q.pop();
        for(int i=0; i<B[tp].size() ; i++){
            if(db[ B[tp][i] ] == 0){
                db[ B[tp][i] ] = db[ tp ] + 1;
                q.push(B[tp][i]);
            }
        }
    }

    if(db[n]==0){
        printf("-1");
        return 0;
    }
    printf("%d", max(dr[n], db[n]));
    return 0;
}
