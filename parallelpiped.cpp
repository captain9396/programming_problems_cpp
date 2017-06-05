#include <bits/stdc++.h>
using namespace std;
int main()
{
	double x, y, z;
	cin >> x >> y >> z;
	double a = sqrt((x*y)/z) , b = sqrt((x*z)/y) , c = sqrt((y*z)/x);
	cout << (4*a) + (4*b) + (4*c);
	return 0;
}
