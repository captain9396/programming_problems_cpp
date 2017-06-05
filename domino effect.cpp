#include <bits/stdc++.h>
using namespace std;
void dropL(char str[3005], int p)
{
    int cnt = 0;
    for(int i=p-1; (str[i]!='R' && i>=0) ; i-=1) str[i] = '0', cnt++;
    if(cnt%2) str[p-1] = '.';
}
void dropR(char str[3005], int p)
{
    for(int i=p+1; (str[i]!='L' && str[i] != '\0') ; i+=1) str[i] = '0';
   // if(cnt%2) str[p] = '.';
}

void makezero(char str[3005], int p)
{
    for(int i=p-1; i>=0; i-=1) str[i] = '0';
}
int main()
{
    int i, n ,  cnt= 0;
    char str[3005];
    cin >> n;
    cin >> str;

    for(int i=0; str[i]; i++){
        if(str[i] == 'L') dropL(str, i);
        else if(str[i] == 'R') dropR(str, i);
    }

    for(i=0; str[i]; i++){
        if(str[i]=='R') break;
        else if(str[i]=='L'){
            makezero(str, i);
            break;
        }
    }

  //  if(f1) str[ind1] = 'L';

 //  cout << str << endl;

    for(i=0; str[i]; i++)
    {
        if(str[i]=='.') cnt+=1;
    }
//    cout << cnt << endl;

     cout << cnt;
    return 0 ;

}
