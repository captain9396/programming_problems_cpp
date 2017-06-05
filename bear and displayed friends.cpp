#include<bits/stdc++.h>
using namespace std;

int a[200007];
bool online[200007];
set<long long>good;
map<long long , int>findid;

int main(){
  int n , k , q; cin>>n >> k>> q;

  for(int i = 0;  i < n ; i++){
    scanf("%I64d" , &a[i + 1]);
    findid[a[i+1]] = i + 1;
  }

  int visible = 0 , t , id;

  while(q--){
    scanf("%d%d" , &t , &id);
    if(t == 1){
      if(visible < k){
        good.insert(a[id]);
        online[id] =true;
        visible++;
      }
      else{
        set<long long>:: iterator it = good.begin() ;
        if(*it < a[id]){
          online[findid[*it]] = false;
          good.erase(it);
          good.insert(a[id]);
          online[id] = true;
        }
      }
    }

    else{
      (online[id] == true) ? printf("YES\n") : printf("NO\n");
    }
  }

  return 0;
}
