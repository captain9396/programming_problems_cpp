#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long d, n, i,j, ara[1010];
	int count = 0;
	cin >> n >> d;
	for(i=0; i<n; i++) cin >> ara[i];
	
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(fabs(ara[i] - ara[j])<=d) count++;
		}
	}
	cout << count * 2;
	return 0;
}
