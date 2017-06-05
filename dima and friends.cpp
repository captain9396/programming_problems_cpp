#include <bits/stdc++.h>
using namespace std;
int check_int(double n)
{
	return !(n - (double)(int)n);
}
int main()
{
	double n, ara[110], sum = 0, count=0, mark = 0, ara_2[110], i, j;
	cin >> n;
	for(i=0; i<n; i++){
		cin >> ara[(int)i]; sum+=ara[(int)i];
	}
	for(j=sum+1; j<=sum+5; j++){
		if(check_int(((j-1)/(n+1))+1)) count++;
	}
	cout << 5 - count ;
	return 0;
}
