#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, count =0, a, max = 0;
	int ara[1010] = {0};
	cin >> n;
	for(i=0; i<n; i++){
		cin >> a;
		ara[a]++;
	}
	for(i=0; i<1010; i++){
		if(ara[i] !=0) count++;
		if(ara[i] > max) max = ara[i];
	}
	cout << max <<" "<<count;
}
