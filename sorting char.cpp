#include <bits/stdc++.h>
using namespace std;
int main()
{
	char str[100] , t , str_2[100];
	cin >> str;
	cin >> str_2;
	
	if(strcmp(str,"0")==0){
		if(strcmp(str_2, "0")==0) cout << "OK";
		else cout << "WRONG_ANSWER";
	}
	else{
		
		for(int i=0; i<strlen(str); i++){
			for(int j=i+1; j<strlen(str); j++){
				if(str[i]>str[j]){
					t = str[i];
					str[i] = str[j];
					str[j] = t;
				}
			}
		}
		if(str[0]=='0'){
			int i = 0;
			while(1)
			{
				if(str[i] != '0'){
					t = str[0];
					str[0] = str[i];
					str[i] = t; break;
				}
				i+=1;
			}
		}
		if(strcmp(str, str_2) == 0) cout << "OK";
		else  cout << "WRONG_ANSWER"; 
	}

	return 0;
}
