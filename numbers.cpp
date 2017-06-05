#include <bits/stdc++.h>
using namespace std;

int base(int n, int b)
{
	int rem, sum = 0;
	while(n)
	{
		rem = n%b;
		sum+=rem;
		n/=b;
	}
	return sum;
}

int gcd(int a, int b)
{
	int i, max = (a>b) ? a : b; int min = (a<b) ? a:b;
	for(i=min ; i>0; i-=1){
		if(a%i==0 && b%i==0) return i;
	}
}
int main()
{
	int a, var,i, sum =0 ;
	cin >> a;
	for(i=2; i<a; i++) sum+=base(a, i);
	var = a - 2;
	int g = gcd(sum, var);
	
	cout << (sum/g) << "/" << (var/g);
	return 0;
	
}
