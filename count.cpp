#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("sql.txt");
    int cnt = 0;
    int t;
    while( fin >> t ){
        cout << t << endl;
        cnt++;
    }
    cout << cnt;
    return 0;
}
