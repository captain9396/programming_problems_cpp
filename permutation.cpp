#include<bits/stdc++.h>
using namespace std;

string s = "RW";
vector< char > ans;
string A[1000];
int cnt;

void recur(int pos , int n){
    if(pos == n){
        A[cnt] = "";
        for(int i = 0 ; i < ans.size(); i++){
            A[cnt] = A[cnt] + ans[i];
        }
        cnt++;
        return ;
    }
    for(int i = 0 ; i < 2 ; i++){
        ans.push_back(s[i]);
        recur(pos + 1 , n);
        ans.pop_back();
    }
}


int main(){
    int n  , k;
    cin >> n >> k;
    recur(0 , n);
    i
    return 0;
}
