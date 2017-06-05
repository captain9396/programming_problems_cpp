#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  i, cnt = 0, a,b,c,d;
    char num[100005];
    cin >> a >> b >> c >> d;
    cin >> num;

    for(i=0; num[i]; i++){
        if(num[i] == '1') cnt+=a;
        else if(num[i] == '2') cnt+=b;
        else if(num[i] == '3') cnt+=c;
        else if(num[i] == '4') cnt+=d;
    }
    cout << cnt;
    return 0;
}
