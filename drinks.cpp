#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n , dr[110], sum=0;
    cin >> n;
    for(int i=0; i<n; i++) cin >> dr[i] , sum+=dr[i];

    cout<< fixed << setprecision(12);
    cout << sum/n << endl;
    return 0;
}
