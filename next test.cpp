#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, ara[5000], a;
	cin >> n;
	for(i=0; i<n; i++) {
		cin >> a;
		ara[a - 1] = 1;
	}
//	sort(ara, ara+n);
	
/*	for(i=0; ; i++){
		if(ara[i+1] - ara[i] != 1){
			cout << ara[i] + 1; break;
		}
	} */
	
	for(i=0 ; i<5010; i++){
		if(ara[i] == 0){
			cout << i+1; break;
		}
	}
	return 0;
}
