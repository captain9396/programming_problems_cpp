#include<bits/stdc++.h>
using namespace std;
int n, m, x, y,z;
map< int , int >foo;
int main(){
    cin>>n>>m;
    for(int i =0; i<m; i++){
        scanf("%d%d%d" ,&x,&y,&z);
        if(foo[x]){
            if(foo[x] == 1) foo[y] = 2, foo[z] = 3;
            else if(foo[x]==2) foo[y] = 1,foo[z] = 3;
            else foo[y] = 1, foo[z] = 2;
        }
        else if(foo[y]){
            if(foo[y] == 1) foo[x] = 2, foo[z] = 3;
            else if(foo[y]==2) foo[x] = 1,foo[z] = 3;
            else foo[x] = 1, foo[z] = 2;
        }
        else if(foo[z]){
            if(foo[z] == 1) foo[x] = 2, foo[y] = 3;
            else if(foo[z]==2) foo[x] = 1,foo[y] = 3;
            else foo[x] = 1, foo[y] = 2;
        }
        else {
            foo[x] = 1 ;foo[y] = 2;foo[z] = 3;
        }
    }

    for(int i =1; i<=n; i++) printf("%d ", foo[i]);
    return 0;
}
