#include <bits/stdc++.h>
using namespace std;
int all_dot(char str[1000]){
	for(int i = 0; str[i] ; i++){
		if(str[i] == '*') return 1;
	}
	return 0;
}


int main()
{
	char mat[1000][1000];
	int n , k, count = -1, i, j, m;
	cin >> n >> k;
	
	for(i = 0; i<n; i++){
		cin >> mat[i];
		int temp = 0;
		for(j = 0; j<k ;j++){
			if(mat[i][j] == '*') temp++;
		}
		if(temp > count) count = temp;
	}
	
	for(i=0; i<n; i++){
		if(all_dot(mat[i]) == 1){
			for(j = 0; mat[i][j]!='*'; j++);
			
			for(m = j; m<j+count; m++) cout << mat[i][m];
			cout << "\n";
		} 
	}
	return 0;
}
