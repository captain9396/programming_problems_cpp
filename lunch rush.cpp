#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, k, i, max, temp;
	long long  ara[10005], time[10005];
	
	cin >> n >> k;
	cin >> ara[0] >> time[0];
	if(time[0] > k) max = ara[0] - (time[0] - k);
	else max = ara[0];
	
	for(i=1; i<n; i++){
		cin >> ara[i] >> time[i];
		if(time[i] > k) temp = ara[i] - (time[i] - k);
		else temp = ara[i];
		
		if(temp > max) max = temp;
	}
	
	cout<< max;
	return 0;
}
