#include <bits/stdc++.h>
using namespace std;

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

int yo[100005];
int main()
{
    int i,dis=0, n,pp, m,  b, dp[100005];
    int v[100005];
    cin >> n >> m;
    for(i=0; i<n; i++){
        v[i] = getnum();
    }

    for(i=n-1; i>=0; i--) {
        if(yo[v[i]]==0) dis++, yo[v[i]]++;
        dp[i] = dis;
    }

    for(i=0; i<m; i++){
        pp = getnum();
        printf("%d\n",dp[pp-1]);
    }

    return 0;
}
