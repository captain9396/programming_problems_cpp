#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k = 1, ara[100], srt[100], f;
	cin >> n;
	cin >> ara[0];
	srt[0] = ara[0];
	for(int i=1; i<n; i++){
		cin >> ara[i];
	    f = 1;
		for(int j=0; j<i; j++){
			if(ara[i] == ara[j]){
				f = 0; break;
			}
		}
		if(f) srt[k] = ara[i] , k++;
	}
	sort(srt,srt+k);
	if(k==1) cout << "NO";
	else cout << srt[1];
	return 0;
}
