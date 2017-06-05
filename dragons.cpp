#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, n, i,j, ara_1[1010] , ara_2[1010], f = 1;
    cin >> s >> n;
    for(i=0; i<n; i++) cin >> ara_1[i] >> ara_2[i];

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(ara_1[i] > ara_1[j]){
                swap(ara_1[i], ara_1[j]); swap(ara_2[i], ara_2[j]);
            }
        }
    }
  //  for(i=0; i<n; i++) cout << ara_1[i] << " ";
    for(i=0; i<n; i++){
        if(s <= ara_1[i]) {
            f = 0; break;
        }
        else s+= ara_2[i];
    }
    if(f) cout << "YES";
    else cout << "NO";
    return 0;
}
