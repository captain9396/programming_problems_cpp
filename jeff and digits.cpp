#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, count_5 = 0;
	char num[1010];
	cin >> n;
	for(i=0; i<n; i++){
		cin >> num[i];
		if(num[i] == '5') count_5+=1;
	}
	int zeros = n - count_5;
	if(count_5==0) cout << "0";
	else if(count_5==n) cout <<"-1";
	else{
		if(count_5<9) cout <<"0";
		else{
			int fives = count_5/9;
			for(i=1; i<=fives*9; i++) cout<<"5";
			for(i=1; i<=zeros; i++) cout<<"0";
		}
	}
//	cout << count_0;
	
	

	return 0;
}
