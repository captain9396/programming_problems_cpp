#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	char str[100], s[50];
	gets(str);
	if(str[0]=='R' && str[1]<'A'){
		int i=1;
		while(str[i]!='C'){
			s[i-1]=str[i]; i++;
		}
		s[i] = '\0';
	}
	puts(s);
	return 0;
}
