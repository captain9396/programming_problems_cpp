#include<bits/stdc++.h>
using namespace std;
int n, m;
int deg[100005];
int check_ring(){
   for(int i=1; i<=n; i++){
      if(deg[i]!=2) return 0;
   }
   return 1;
}

int star(){
   int cnt = 0;
   for(int i=1; i<=n; i++){
      if(deg[i]==1 or deg[i]==n-1){
        if(deg[i]==n-1) cnt++;
        if(cnt>1) return 0;
      }
      else return 0;
   }
   return 1;
}

int main(){
   int f = 1, busok = 1, x, y;
   cin>>n>>m;
   for(int i =0; i<m; i++){
      scanf("%d%d", &x,&y);
      deg[x]++; deg[y]++;
      if(deg[x]>2 or deg[y]>2) f=0, busok = 0;
   }

   if(f){
      if(check_ring()) cout<<"ring topology";
      else cout<<"bus topology";
   }
   else if(star()){
      cout<<"star topology";
   }

   else cout<<"unknown topology";
   return 0;
}
