#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, m, COST = 10006, i, j, puz[150];
    cin >> n >> m;
    for(i=0; i<m; i++) cin >> puz[i];

    sort(puz, puz+m);
    for(j = 0, i=n-1  ;  i<m  ; j++, i++)
    {
        if((puz[i] -  puz[j]) < COST) COST =  puz[i] -  puz[j];
  //   cout << puz[i] - puz[j] << " " ;
    }
    cout << COST;
    return 0;
}
