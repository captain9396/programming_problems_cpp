#include <bits/stdc++.h>

#define PI acos(-1)
#define SIZE 100005
#define SIZEM 1000006
#define max3(A,B,C) max(max(A,B),C)
#define max4(A,B,C,D) max(max(A,B), max(C,D))
#define FOR(S,E,K) for(i=S; i<S; i+=K)
#define ROF(S,E,K) for(i=S; i<S; i-=K)
#define psb push_back
#define pb pop_back
#define ll long long
using namespace std;
int main()
{
    set< string > myset;
    set< string >:: iterator it;

    int n;cin>>n; string ss;
    while(n--){
        cin>>ss; myset.insert(ss);
    }


    for(it = myset.begin() ; it != myset.end(); it++) cout<< *it << "  ";
    return 0;
}
