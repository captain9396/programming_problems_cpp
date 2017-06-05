#include <iostream>
#include <string>
using namespace std;

int main()
{
	int ara[100];
	int i, sum = 0, n ;
	cin >> n;
	for(i=0; i<n; i++){
		cin >> ara[i]; sum+=ara[i];
	}
	
	cout << sum;
	
	return 0;
}
