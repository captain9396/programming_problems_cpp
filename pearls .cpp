#include<bits/stdc++.h>
#define pii pair<Long,Long>
using namespace std;
typedef long long Long;

vector<pii>foo;
map<Long, Long>prl;

Long cnt;

int main(){
    Long n ; cin>>n;
    Long T , a;
    Long ret = 1;
    for(Long i=1; i <= n ; i++ ){
        scanf("%I64d"  , &a);
        T = prl[a];
        if(T){
            foo.push_back(pii(ret , i));
            ret = i+1;
            prl.clear();
            cnt++;
        }
        else prl[a] = i;
    }
    if(foo[foo.size() - 1].second != n){
        foo[foo.size() - 1].second = n;
    }
    if(!cnt){
        cout<<-1;
        return 0;
    }
    cout<<cnt<<endl;
    for(int i=0 ; i<foo.size() ; i++) printf("%I64d %I64d\n" , foo[i].first , foo[i].second);
    return 0;
}
