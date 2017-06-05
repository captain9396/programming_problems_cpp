#include <bits/stdc++.h>
using namespace std;
int stoi(string s)
{
    int i;
    char str[100];
    for( i=0; s[i]; i++){
        str[i] = s[i];
    }
    str[i] = '\0';
    return atoi(str);
}


int main()
{
    string s;
    cin >> s;
    cout << stoi(s);
    return 0;
}
