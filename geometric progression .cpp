#include<bits/stdc++.h>
#define Long long long
using namespace std;

Long a[200007];
map<Long , set<int> >getint;
Long ans;

int main(){

  int n  , k ; cin>>n>>k;
  for(int i = 0 ; i < n ; i++){
    scanf("%I64d" , &a[i]);
    getint[a[i]].insert(i);
  }

  for(int i = 0 ; i < n ; i++){
    Long sz1 = getint[a[i] * k].size();
    Long sz2 = getint[a[i] * k * k].size();
    cout << sz1 << " "<<sz2<<endl;
    if(sz1 && sz2){
      set<int>::iterator it1 = getint[a[i] * k].begin();

      int k = 0;

      while(*it1 <= i && it1 != getint[a[i] * k].end()){
        it1++;
        k++;
      }
      sz1-=k;

      set<int>::iterator it2 = getint[a[i] * k * k].begin();

      int m = 0;

      while(*it2 <= i && it2 !=  getint[a[i] * k * k].end()){
        it2++;
        m++;
      }
      sz2-=m;
      cout << sz1 << " "<<sz2<<endl;
    }
    ans+= sz1 * sz2;
  }

  cout << ans;
  return 0;

}
