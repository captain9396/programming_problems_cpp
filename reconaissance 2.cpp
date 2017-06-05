#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n, min,ind1, ind2 ,i,ara[1010];
	cin >> n;
	for(i=0; i<n; i++) cin >> ara[i];
	
	min = fabs(ara[0] - ara[1]);
	for(i=1; i<n; i++){
		if(fabs(ara[i] - ara[(i+1)%n]) < min){
			min = fabs(ara[i] - ara[(i+1)%n]) ;
			ind1 = (i+1)%n;
			ind2 = (i+2)%n;
		}
	}
	cout << ind1 << ind2;
	return 0;
}
