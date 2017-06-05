#include <bits/stdc++.h>
using namespace std;
int check_substr(char str[100], char str_2[50])
{
	int flag, i, j,k,len_1 = strlen(str), len_2 = strlen(str_2);
	for(i=0; i<=len_1 - len_2 ; i++){
		flag = 1;
		for(j=i, k=0; j<len_2+i; j++, k++){
			if(str_2[k] != str[j]){
				flag = 0; break;
			}
		}
		if(flag) return 1;
	}
	return 0;
}

void revstr(char str[100005])

int main()
{
	char str_1[1000], str_2[100];
	gets(str_1);
	gets(str_2);
//	if(check_substr(str_1, str_2)) cout << "YES";
//	else cout << "NO";
	revstr(str_1);
	cout << str_1;
	return 0;
}
