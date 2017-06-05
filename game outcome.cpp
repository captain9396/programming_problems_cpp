#include <bits/stdc++.h>
using namespace std;

int win(int a[][35], int i, int j, int n)
{
    int s1 = 0, s2 = 0;
    for(int p=0; p<n; p++) s1+=a[i][p] , s2+=a[p][j];
    if(s2 > s1) return 1;
    return 0;
}
int main()
{
    int n, a[35][35] , i, j, cnt = 0;
    cin >> n;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++) scanf("%d", &a[i][j]);
    }

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(win(a,i,j, n)) cnt++;
        }
    }

    cout << cnt;
    return 0;
}
