#include <bits/stdc++.h>
using namespace std;

int E[100000][3];
int d[100000];

int main(){
    int node, edge, x,y,c;
    cin>>node>>edge;
    for(int i=0; i<edge; i++){
        scanf("%d%d%d", &x,&y,&c);
        E[i][0] = x; E[i][1] = y; E[i][2] = c;
    }

    int src;
    cin>>src;
    d[src] = 0;

    for(int i=0; i<node-1; i++){
        for(int j =0; j<edge; j++){
            if(d[ E[j][1] ]  > d[ E[j][0] ] + E[j][2] ){
                d[ E[j][1] ]  = d[ E[j][0] ] + E[j][2];
            }
        }
    }
    int f = 1;
    for(int j=0; j<edge; j++){
        if(d[ E[j][1] ]  > d[ E[j][0] ] + E[j][2] ){
            f = 0;
            cout<<"no shortest path possible";
            return 0;
        }
    }
    if(f){
        int query;
        cin>>query;
        while(query--){
            int e; cin>>e;
            cout<<d[e]<<endl;
        }
    }
    return 0;
}
