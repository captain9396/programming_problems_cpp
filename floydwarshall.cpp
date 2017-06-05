#include<bits/stdc++.h>
using namespace std;

int d[100][100];

int main(){
    for(int i =0; i<100; i++){
        for(int j =0; j<8; j++){
            if(i!=j) d[i][j] = 1000000;
        }
    }

    int node , edge, x, y, c ; cin>>node>>edge;

    for(int i = 0 ; i <edge ; i++){
        scanf("%d%d%d", &x,&y,&c);
        d[x][y] = c;
    }

    for(int k=1; k<=node; k++){
        for(int i =1; i<=node; i++){
            for(int j =1; j<=node ;j++){
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    int query;cin>>query;
    while(query--){
        int s, e;
        cin>>s>>e;
        cout<<d[s][e]<<endl;
    }
    return 0;

}











