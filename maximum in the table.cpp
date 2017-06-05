#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i , j;
    long n, tab[10][10];
    cin >> n;

    for(i=0; i<10; i++) tab[0][i] = 1;
    for(i=1; i<10; i++){
        tab[i][0] = 1;
        for(j=1; j<10; j++){
            tab[i][j] = tab[i][j-1] + tab[i-1][j];
        }
    }

 /*   for(i=0; i<10; i++){
    for(j=0; j<10; j++){
        cout << tab[i][j]<< "     ";
    }
    cout << endl;
    }*/
    cout << tab[n-1][n-1];

    return 0;
}
