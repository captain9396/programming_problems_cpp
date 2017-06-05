#include <bits/stdc++.h>
using namespace std;
char _map[100][100];
int found = 0, n, m;
void check( int i, int j ) {
    if( i < 0 || j < 0 || i >= n || j >=m ) return;
    if( _map[i][j] == 'B' ) found  = 1; // mario can reach bipasa
    else if( _map[i][j] == 'X' ) return;
    else {
        check(i-1,j);
        check(i,j-1);
        check(i,j+1);
        check(i+1,j);
    }
}
int main()
{
    int i;
    cin >> n >> m;
    for(i=0; i<n; i++) cin >> _map[i];
    check(0,0);
    if(found) cout << "YES";
    else cout << "NO";

    return 0;
}
