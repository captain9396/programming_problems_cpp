#include <bits/stdc++.h>
using namespace std;
int check_arr(long long arr[], long long  n, long long num)
{
    int i;
    for( i=0; i<n; i++){
        if(num == arr[i]) return 1;
    }
    return 0;
}
/*
int main()
{
    int n , ara[1000000005];
    long long , a;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a; ara[i+1] = a;
    }

}
*/
int main()
{
    string a, b;
    a = "sfsdf";
    b = "fsdfs";
    cout << a + b;

}
