#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int all_slash(char str[150])
{
	int i;
	for(i=0; str[i]; i++)
	{
		if(str[i]!='/') return 0;
	}
	return 1;
}
int main()
{
	int i;
	char str[150];
	gets(str);
	if(all_slash(str)==1) cout << "/";
	else{
		for(i=0; str[i]; i++){
			if(str[i]>=97 && str[i]<=122){
				if(str[i-1] == '/') cout << "/"<<str[i];
				else cout <<str[i];
			}
		}
	}
	return 0;
}

