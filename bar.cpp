#include <bits/stdc++.h>
using namespace std;

int stoi(string s)
{
    int i;
    char ss[10];
    for(i=0; s[i]; i++) ss[i] = s[i];
    ss[i] = '\0';
    return atoi(ss);
}

int main()
{
    int i, n, cnt = 0;
    string dr[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"}, ss;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> ss;
        if(ss[0] < 'A'){
            if(stoi(ss) < 18) cnt+=1;
        }
        else {
            for(int j =0; j<11; j++){
                if(dr[j]==ss){
                    cnt+=1;
                    break;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
