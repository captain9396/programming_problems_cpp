#include <bits/stdc++.h>
using namespace std;
int digital(char n){
    if(n=='0') return 2;
    else if(n=='1')return 7;
    else if(n=='2')return 2;
    else if(n=='3')return 3;
    else if(n=='4')return 3;
    else if(n=='5')return 4;
    else if(n=='6')return 2;
    else if(n=='7')return 5;
    else if(n=='8')return 1;
    else if(n=='9')return 2;
}
int main()
{
    char s[3];
    gets(s);
    if(strlen(s)==1){
        cout << digital(s[0]);
    }
    else{
        cout << digital(s[0]) * digital(s[1]);
    }
    return 0;
}
