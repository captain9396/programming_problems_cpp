#include <bits/stdc++.h>
using namespace std;

int len(string str){
    int i;
    for( i = 0; str[i]; i++);
    return i;
}


int onlytwo(string str )
{
    int ara[150] = {0} , cnt = 0 , i;
    for(i=0; str[i] ; i++){
        ara[(int)str[i]]++;
    }
    for(i=95; i<125; i++){
        if(ara[i]>0) cnt++;
    }
    if(cnt>2) return 0;
    else return 1;
}


int main()
{
   string str = " ";
  //  cin >> str;

    cout << len(str);
    return 0;
}
