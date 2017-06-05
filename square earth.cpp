#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
	int n, x1, y1, x2, y2;
	cin >> n >> x1 >> y1 >> x2 >> y2;
	
	if((x1 == 0 && y2==0) || (x2 ==0 && y1 ==0)){
		if(x1==0 && y2==0) cout << min(x2+y1, 4*n - (x2+y1));
		else cout << max(x1+y2, 4*n - (x1+y2));
	}
	else if((y1==0 && x2==n) || (y2==0 && x1==n)){
		if(y1==0 && x2==n) cout << min((n-x1)+y2, 4*n - ((n-x1)+y2));
		else cout << min((n-x2)+y1, 4*n - ((n-x2)+y1));
	}
	else if((x1==0 && y2==n) || (x2==0 && y1==n)){
		if(x1==0 && y2==n) cout << min(x2+n-y1, 4*n - (x2+n-y1));
		else cout << min(x1+n-y2, 4*n - (x1+n-y2));
	}
	else if((y1==n && x2==n) || (y2==n && x1==n)){
		if(y1==n && x2==n) cout << min(n - x1 + n- y2, 4*n - (n - x1 + n- y2));
		else cout << min(n - x2 + n- y1, 4*n - (n - x2 + n- y1));
	}
	else if((y1==n && y2==0) || (y2==n && y1==0)) cout << min(n+n-x1+n-x2 , 4*n - (n+n-x1+n-x2));
	else if((x1==0 && x2==n) || (x2==0 && x1==n)) cout << min(n+y1+y2 , 4*n - (n+y1+y2));
	
	return 0;
}
