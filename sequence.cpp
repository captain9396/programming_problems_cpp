#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n, i;
	long long ara[5005], count = 0;
	cin >> n;
	cin >> ara[0];
	for(i=1; i<n; i++){
		cin >> ara[i];
		if(ara[i-1] > ara[i]){
			count+=(ara[i-1] - ara[i]);
		}
	}
	cout << count;
	return 0;
}
