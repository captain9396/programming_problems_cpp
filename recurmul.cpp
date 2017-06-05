#include <bits/stdc++.h>
using namespace std;


int main()
{
    char str[100];
    cin >> str;

    for(int i=0; str[i]; i++){
        if(str[i]==',') printf("\n");
        else printf("%c", str[i]);
    }
    return 0;
}
