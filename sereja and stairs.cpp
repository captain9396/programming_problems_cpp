#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i , n, ma = 0 , cnt = 0, x;
    int a[100005] = {0};
    cin >> n;
    for(i=0; i<n; i++){
        cin >> x;
        a[x]++;
        if(x > ma)  ma = x;

    }
    for(i=1; i<=ma; i++){
        if(a[i]==1 && i!=ma) cnt+=1;
        else if(a[i] >=2 && i!=ma)cnt+=2;
    }
    cout << cnt+1 << endl;
//    cout << ma<<" ";
    for(i=1; i<=ma; i++){
        if(i==ma) cout << i << " ";
        else if(a[i]>0){
            a[i]-=1;
            cout << i << " ";
        }
    }

    for(i=ma-1; i>=0; i-=1){
        if(a[i]>0) cout << i << " ";
    }
 //   for(i=0; i<=ma; i++) cout << a[i] << " ";
    return 0;
}
