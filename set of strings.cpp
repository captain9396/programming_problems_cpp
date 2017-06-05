#include <bits/stdc++.h>
using namespace std;

#define PI  acos(-1)
#define SIZ  100005
#define max3(a,b,c)  max(max(a,b),c)
#define max4(a,b,c,d)  max(max(a,b), max(c,d))
#define TAKEINP(ara)  for(i=0; i<n; i++) cin >> ara[i]
#define FOR(s,n,p)  for(i=s; i<n; i+=p)
#define push_back  psb
#define pop_back  pob
#define ll  long long

int k, i, j;
string str , ans[100] , s;
int a[150] = {0};

int main()
{
    int m = 0;
    cin >> k;
    cin >> str;
    if(k==1) cout << "YES" << "\n" << str;
    else if(k>str.length()) cout << "NO";
    else{
        for(p = 0 ; str[i]; ){
            i = m;
            if(a[str[i]] == 0){
                s = "" , j = i;
                while(a[str[j]]==0) s = s + str[j] , j++;
                ans[p] = s , p++;
                m = j;
            }
        }
    }
}
