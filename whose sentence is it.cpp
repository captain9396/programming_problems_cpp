#include <bits/stdc++.h>
using namespace std;
string stcs(string s, int j)
{
    if(j) return s.substr(s.length() - 5, 5);
    return s.substr(0,5);
}

int main()
{
    string ss;
    int n, i;
    cin >> n;
  //  for(i=0; i<n; i++){
        cin >> ss;
        cout << ss.substr(ss.length() - 5, 5);
//}

    return 0;
}
