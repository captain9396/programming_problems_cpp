#include <bits/stdc++.h>
using namespace std;

long long strsum(string str)
{
    long long sum = 0;
    for(int i = 0; str[i] ; i++) {
        sum+= (int)(str[i] - '0');
    }
    return sum;
}
int main()
{
    string str, ans;
    int n, i, var; long long sum = 0, cnt =0;
    char num[100005];
    cin >> n;
    for(i=0; i<n; i++){
        cin >> num[i];
        sum+=((int)(num[i] - '0'));
      //  if((int)num[i]==0) cnt++;
    }
  /*  cout <<cnt << endl;
    if(cnt==0) {
        cout << -1; return 0;
    }
*/
    sort(num, num+n);
    strrev(num);
    str = num;

  /*  if(str[n-1]==0){
        for(i=0; i<n; i++){

        }
    }*/
    for(i=0; i<n; i++){
        ans = str.substr(0, n-i);
        var = (int)(ans[n-1-i] - '0');
        if(var%2==0 && sum%3==0 && var==0){
            cout << ans;
            return 0;
        }
        else if(var == 0) str[n - 2 - i] = '0';

   //     cout << ans << endl; */
   //     cout <<ans << " "<< var << endl;
        cout <<ans << " " << var<< " " <<strsum(ans) << " " << endl;
    }
    cout << -1;
    return 0;
}
