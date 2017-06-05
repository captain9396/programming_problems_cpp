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
const int N = 100005;
set<int>g[N], foo;
int col[N];

inline int getnum()
{
    char c = getchar();
    int num,sign=1;
    for(;c<'0'||c>'9';c=getchar())if(c=='-')sign=-1;
    for(num=0;c>='0'&&c<='9';)
    {
        c-='0';
        num=num*10+c;
        c=getchar();
    }
    return num*sign;
}

inline void write(int x){
    if(x==0){putchar('0');return;}if(x<0)putchar('-'),x=-x;
    int len=0,buf[15];while(x)buf[len++]=x%10,x/=10;
    for(int i=len-1;i>=0;i--)putchar(buf[i]+'0');putchar('\n');return;
}

int main(){
    int n , m, mx = -1, x ,y;
    n = getnum();
    m = getnum();
    for(int i=0; i<n; i++){
        col[i + 1] = getnum();
        foo.insert(col[i+1]);
    }
    while(m--){
        x = getnum();
        y = getnum();
        if(col[x] != col[y]){
            g[col[x]].insert(col[y]);
            g[col[y]].insert(col[x]);
        }
    }
    int ind = *(foo.begin()), M = -1;
    for(set<int>::iterator it = foo.begin(); it!= foo.end(); it++){
        if((int)g[*it].size() > M){
            M = (int)g[*it].size();
            ind = *it;
        }
        if((int)g[*it].size() == M && *it < ind ) ind = *it;
    }
    write(ind);
    return 0;
}
