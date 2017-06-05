#include <bits/stdc++.h>
using namespace std;
int cnt;

int good(string s , int k)
{
    int aa[10] = {0}, i, f1=1, f2=1;
    for(i=0; s[i]; i++) aa[s[i] - '0']++;
    for(i=0; i<k; i++){
        if(aa[i]==0){
            f1=0;
            break;
        }
    }
    for(i=k; i<10; i++){
        if(aa[i] > 0){
            f2=0;
            break;
        }
    }
    if(f1&&f2)return 1;
    else return 0;
}

int main()
{
    string s;
    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> s;
        cout << good(s,k) << endl;
    }

  //  cout << cnt;
    return 0;
}
