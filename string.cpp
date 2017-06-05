#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch[10];
	int i;
	gets(ch);
	for(i=0; ch[i]; i++) cout << ch[i] <<"\n";
	return 0;
}
