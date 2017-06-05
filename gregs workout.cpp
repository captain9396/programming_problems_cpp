#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i ,p=0 ,a,chest = 0, biceps = 0, back = 0, ara[100];
	cin >> n;
	for(i=0; i<n; i++)
	{
		cin >> a;
		if(p==0){
			chest+=a; p=1;
		}
		else if(p==1){
			biceps+=a; p=2;
		}
		else if(p==2){
			back+=a; p=0;
		}
	}
	int m = max(max(chest,biceps), max(chest, back));
	if(m==chest) cout << "chest";
	else if(m==biceps) cout << "biceps";
	else cout << "back"; 
	
	return 0;
}

