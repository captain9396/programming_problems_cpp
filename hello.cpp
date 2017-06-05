#include <iostream>
using namespace std;

int main ()
{
	int i;
	char input[100];
	
	gets(input);
	for( i=0; input[i] ; i++){
		if(input[i] >=97 && input[i]<=122) input[i] = input[i] - ('a' - 'A');
		
	}
	cout << input;
	return 0;
}
