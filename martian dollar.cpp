#include<bits/stdc++.h>

using namespace std;
const int N = 2222;

int a[N];

int main(){
    int n , k ; cin>>n>>k;
    int mx = k;

    for(int i = 0 ; i< n ; i++) scanf("%d"  , &a[i]);

    for(int i = 0 ; i < n - 1;  i++){
        int dol = k / a[i];
        int left = k % a[i];
        for(int j = i + 1; j < n ; j++){
            mx = max(mx , dol * a[j] + left);
        }
    }
    cout << mx;
}
