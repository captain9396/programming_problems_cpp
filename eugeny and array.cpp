#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i,x, l, r,cnt1 = 0, cnt2;
    cin >> n >> m;

    for(i=0; i<n; i++){
        cin >> x;
        if(x==1) cnt1++;
    }


    cnt2 = n - cnt1;


    if(cnt1==0 || cnt2==0){
        for(i=0; i<m; i++) cout << "0" << endl;
        return 0;
    }

    for(i=0; i<m; i++){
        cin >> l >> r;
        if((r-l)%2==1){
            if((r-l + 1)/2 <= cnt1 && (r-l + 1)/2 <=cnt2) cout << "1"<<endl;
            else cout << "0" << endl;
        }
        else cout << "0" << endl;
    }

    return 0;
}
