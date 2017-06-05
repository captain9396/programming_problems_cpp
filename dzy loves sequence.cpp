#include<bits/stdc++.h>
#define Long long long
using namespace std;

const int maxn = 100007;

Long A[maxn];
int mx;

int main(){
    int n ;
    cin >> n;
    for(int i = 0 ; i < n ;i ++) cin >> A[i];
    int j = 1;
    for(int i = 0 ; i < n || j <n; i++){
        int cnt = 0;
        while(cnt < 2 && j < n){
            if(A[j] <= A[i]) cnt++;
            j++;
        }
        cout << i <<  ' ' << j << endl;
        mx = max(j - i , mx);
    }
    cout << mx;
    return 0;

}
