#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, t, i, cell = 1 , ara[30005];
	cin >> n >> t;
	for(i=0; i<n-1; i++) cin >> ara[i];
	
	if(t==1) cout << "YES";
	else{
		i=0;
		while(1){
			cell+=ara[i];
			i=(cell-1);
			if(cell == t){
				cout << "YES"; break;
			}
			if(cell > t){
				cout << "NO"; break;
			}
		}
	}
	return 0;
	
	
}
