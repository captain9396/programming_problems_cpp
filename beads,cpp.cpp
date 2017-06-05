#include<bits/stdc++.h>
using namespace std;
inline long FastMax(long x, long y) { return (((y-x)>>(32-1))&(x^y))^y; }
inline long FastMin(long x, long y) { return (((y-x)>>(32-1))&(x^y))^x; }

int main(){
	string s;
	cin>>s;
	cout << s;
	return 0;
}
