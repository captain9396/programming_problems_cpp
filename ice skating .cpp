/*
   In the name of God
   Syed Mostofa Monsur
*/

#include <cstring>
#include <fstream>
#include <iterator>
#include <vector>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <memory.h>
#include <cassert>

#define repi(A,B) for(int i=A; i<B; i++)
#define repj(A,B) for(int j=A; j<B; j++)
#define repk(A,B) for(int k=A; k<B; k++)
#define _repi(A,B) for(int i=B; i<A; i--)
#define _repj(A,B) for(int j=B; j<A; j--)
#define _repk(A,B) for(int k=B; k<A; k--)
#define si(A) scanf("%d", &A)
#define sii(A,B) scanf("%d%d", &A, &B)
#define siii(A,B,C) scanf("%d%d%d", &A,&B,&C)
#define sl(A) scanf("%I64d", &A)
#define sll(A,B) scanf("%I64d%I64d", &A, &B)
#define slll(A,B,C) scanf("%I64d%I64d%I64d", &A,&B,&C)
#define pf(A) printf("%d", A)
#define pff(A,B) print("%d%d", A, B)
#define pfff(A,B,C) print("%d%d%d", A,B,C)
#define pl(A) print("%I64d", A)
#define pll(A,B) print("%I64d%I64d", A, B)
#define plll(A,B,C) print("%I64d%I64d%I64d", A,B,C)
#define pii pair<int,int>
#define ff first
#define ss second
#define pb push_back
#define ppb pop_back
#define MAX(A,B) ((A >= B) ? (A) : (B))
#define MIN(A,B) ((A < B) ? (A) : (B))
#define ABS(X) ((X >= 0) ? (X) : -(X))
using namespace std;

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int ddx[]={0,0,1,-1,1,1,-1,-1};
int ddy[]={1,-1,0,0,1,-1,-1,1};

template<typename T> T gcd(T a, T b){
   if(a%b==0) return b;
   return gcd(b,a%b);
}

typedef long long ll;

// ************************************Template Ends Here***************************************************//
struct node{
    int x, y;
};

vector<node>foo;
vector<int>g[105];
bool vis[105];
void Dfs(int n){
    vis[n] = true;
    for(int i=0; i<g[n].size(); i++){
        if(vis[g[n][i]] == false) Dfs(g[n][i]);
    }
}

int main(){
    int n, s= 0;
    cin>>n;
    int a, b;
    node R; R.x = -1,R.x = -1;
    foo.pb(R);
    for(int i =1; i<=n ; i++){
        sii(a,b);
        node T ;
        T.x = a; T.y = b;
        for(int j=1; j<foo.size(); j++){
            if(foo[j].x == a || foo[j].y == b){
                g[j].pb(i);
                g[i].pb(j);
            }
        }
        foo.pb(T);
    }

    Dfs(1);
    for(int i=1; i<=n ; i++){
        if(vis[i] == false){
            Dfs(i);
            s++;
        }
    }
    cout<<s;
    return 0;
}
