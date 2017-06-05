#include <iostream>
#include <string>
using namespace std;
int main()
{
	int ara_a[100005], ara_b[100005];
	int n1, n2, k, m, i, j, flag = 1;
	cin >> n1 >> n2;
	cin >> k >> m;
	
	for(i=0; i<n1; i++) cin >> ara_a[i];
	
	for(i=0; i<n2; i++) cin >> ara_b[i]; 	
	
	// j>=n2-m
	//i<k
	if(ara_a[k-1] >= ara_b[n2-m]) cout << "NO";
	else cout << "YES";
	return 0;
}
