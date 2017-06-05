#include <bits/stdc++.h>
#define SIZE 150
using namespace std;

char str[SIZE];

int main()
{
	int i, count = 1, move = 0;
	cin >> str;
	char ch = str[0];
	for(i=1 ; str[i]; i++){
		if(str[i] == ch && count!=5){
			count+=1;
		}
		else if(count==5 || str[i]!=ch){
			ch = str[i]; move++; count = 1;
		}
	}
	cout << move+1;
	return 0;
}
