#include <bits/stdc++.h>
using namespace std;
void crystal(int star, int d)
{
	int i;
	for(i=0; i<star; i++) cout << "*";
	for(i=0; i<d; i++) cout <<"D";
	for(i=0; i<star; i++) cout << "*";
	cout << "\n";
}

int main()
{
	int n, i, k;
	cin >> n;
	for(i=(n-1)/2, k=0; i>=1; i--, k++) crystal(i,2*k+1 );
	crystal(0,n);
	for(i=1, k=n-2; i<=(n-1)/2; i++, k-=2) crystal(i, k);
	return 0;
}
