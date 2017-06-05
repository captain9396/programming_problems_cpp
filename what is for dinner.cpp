#include <bits/stdc++.h>
#define SIZE 1000005
using namespace std;

int main()
{
	int  n , m , k , ara[1050] , sum=0, i, r, rv;
	for(i=0; i<1050; i++) ara[i] = SIZE;
	cin >> n >> m >> k;	
	cin >> r >> rv; ara[r] = rv;
	for(i=1; i<n; i++) {
		cin >> r >> rv;
		if(ara[r] == -1) ara[r] = rv;
		if(rv < ara[r]) ara[r] = rv;	
	}
	
	for(i=0; i<1050; i++) {
	    if(ara[i]!=SIZE) sum+=ara[i] ;	
	}
	
	if(sum>=k) cout << k;
	else cout << sum; 
//	for(i=0; i<5; i++) cout << ara[i] << " ";

	return 0;
}
