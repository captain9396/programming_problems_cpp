#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, a;
	int count_1 = 0, count_2 = 0;
	cin >> n;
	for(i=0; i<n; i++)
	{
		cin >> a;
		if(a==100) count_1++;
		else count_2++;
	}
	if((count_1%2)==0 && (count_2%2)==0) cout << "YES";
	else if(count_1*100 == count_2*200) cout << "YES";
	else if(n%2==0 && (count_2==0 || count_1==0)) cout << "YES";
	else cout << "NO";
	return 0;
}
