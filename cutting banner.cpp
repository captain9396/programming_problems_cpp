#include <iostream>
#include <string>
using namespace std;
int main()
{
	char src[] = "CODEFORCES";
	char word[110];
	gets(word);
	int i , k = 0, count = 0;
	
	for(i=0; word[i]; i++){
		if(word[i] == src[k]){
			k++;
			count++;
		}
	}
	if(count>=10) cout << "YES";
	else cout << "NO";
	
	return 0;
}
