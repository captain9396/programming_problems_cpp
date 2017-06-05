#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k, a,cnt = 0;
    cin >> n >> m >> k;

    for(int i = 0; i<n; i++){
        cin >> a;
        if(a==1){
            if(m>0) m-=1;
            else if(m==0) cnt+=1;
        }
        else if(a==2){
            if(k>0) k=-1;
            else if(k==0){
                if(m>0) m-=1;
                else cnt+=1;
            }
        }
    }

    cout << m << " " << k << endl;
    cout << cnt;
    return 0;
}
