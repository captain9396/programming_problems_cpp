#include <bits/stdc++.h>
using namespace std;

int n;
char jump[110];

int main()
{
    cin >> n;
    cin >> jump;
    int i = 0;
    while(jump[i]!='*') i++;
    cout << i;
    return 0;
}
