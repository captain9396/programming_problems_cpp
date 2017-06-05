#include <iostream>
using namespace std;
int main()
{
	int n, i, s , t, ara[500], dis_1 = 0, dis_2 = 0;
	cin >> n;
	for(i=0; i<n ;i++) cin >> ara[i];
	cin >> s >> t;
	if(s==t) cout << "0";
	else{
		int lar = max(s,t); int sma = min(s,t);
		
		for(i=sma-1; i<=lar-2; i++) dis_1+=ara[i];
		for(i=(lar-1)%n ; ; i++){
			if(i%n==sma-1) break;
			dis_2+=ara[i%n];
		}
		cout << min(dis_1, dis_2);
	}
	return 0;
}
