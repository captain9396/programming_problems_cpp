#include <bits/stdc++.h>
using namespace std;
int check_right(int x1,int y1,int x2,int y2,int x3,int y3)
{
	int d1 = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	int d2 = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
	int d3 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	int m = max(d1, max(d2, d3));
	if(m == d1) {
		if(d1*d1 == d2*d2 + d3*d3) return 1;
	}
	else if(m==d2){
		if(d2*d2 == d1*d1 + d3*d3) return 1;
	}
	else if(m==d3){
		if(d3*d3 == d2*d2 + d1*d1) return 1;
	}
	return 0;
}
int main()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1>> y1>> x2>> y2>> x3>> y3;
	cout << check_right(x1, y1, x2, y2, x3, y3);
	
	return 0;
}
