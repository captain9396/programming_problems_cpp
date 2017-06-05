#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1)
#define SIZE 100005
#define SIZEM 1000006
#define max3(a,b,c) max(max(a,b),c)
#define max4(a,b,c,d) max(max(a,b), max(c,d))
#define TAKEINP(ara) for(i=0; i<n; i++) cin >> ara[i]
#define push_back psb
#define pop_back pob
#define ll long long

char  inp[210];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int f = 0, i, k=0;
    cin >> inp;
    int l = strlen(inp);
    inp[l] = '0', inp[l+1] = '0';
    for(i=0; i<l ; i+=1){
        if(inp[i]=='W' && inp[i+1]=='U' && inp[i+2]=='B') inp[i]='0' , inp[i+1]='0' , inp[i+2]='0';
    }

   // for(i=0; inp[i]; i++) cout << inp[i];
    for(i=0; inp[i]; i++){
        if(inp[i]=='0'){
            if(f==0) ;
            else cout << " ", f=0;
        }
        else {
            cout << inp[i]; f = 1;
        }
    }
    return 0;
}
