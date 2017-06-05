#include <bits/stdc++.h>
using namespace std;

void printnum(int n)
{
    for(int i=0; i<n-1; i++) cout << "1";
    cout << "0";
}
int main()
{
    int i, arr[1500], num[1500]={0} , n;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> arr[i]; num[arr[i]]++;
        if(num[arr[i]]>1){
            cout << "NO"; return 0;
        }
    }

    cout << "YES" << endl;
    for(i=0; i<1500; i++){
        if(num[i]>0) {
            printnum(i);
            cout << "\n";
        }
    }
  //  printnum(3);
    return 0;
}
