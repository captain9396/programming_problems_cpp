#include <bits/stdc++.h>
using namespace std;
int road[305][305];
int main(){
    int n,  s = 0;cin>>n;
    for(int i=0; i<n ; i++){
        for(int j =0 ; j<n; j++){
            scanf("%d", &road[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j = 0; j<i; j++) s+=road[i][j];
    }
    cout<<s;

  /*  int k;cin>>k;
    for(int i=0; i<k; k++){
        scanf("%d %d %d", &a,&b,&c);
        road[a-1][b-1] = c; road[b-1][a-1] = c;
        update();
    }*/
    return 0;
}
