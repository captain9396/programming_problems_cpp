#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cassert>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <list>
#include <map>
#include <utility>
#include <iomanip>
#include <cstdlib>

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
int a[1005], b[1005], arr[1005][1005];
int main()
{
    int n, m, k, i,j,x,y;
    char ch;
    for(i=1; i<=1005; i++) { a[i] = i-1; b[i] = i-1; }
    cin >>n>>m>>k;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++) scanf("%d",&arr[i][j]);
    }
    for(i=0; i<k; i++){
        scanf(" %c %d %d",&ch, &x, &y);
        if(ch=='c') swap(a[x],a[y]);
        else if(ch=='r') swap(b[x],b[y]);
        else printf("%d\n",arr[b[x]][a[y]]);
    }
    return 0;
}
