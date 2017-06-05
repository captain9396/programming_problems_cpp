#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, ara[110], j, k;
	cin >> n;
	for(i=0; i<n; i++) cin >> ara[i];
	sort(ara , ara+n);
	
	for(i=n-1; i>=3; i-=1){
		for(j = i-1; i>=0; i--){
			for(k=0; k<n; k++){
				if(ara[i] == ara[j] + ara[k] && k!=j){
					cout <<i+1<<" "<<j+1<<" "<<k+1;
					
				}
			}
		}
	}
	return 0;
}
