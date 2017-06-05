#include <iostream>
using namespace std;
int main()
{
    int n, num = 0;
    cin >> n;

    while(n){
        num+=(((n+num)%10) * 10);
        n/=10;
    }

    cout << num;
    return 0;
}
