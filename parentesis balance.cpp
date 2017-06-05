#include<bits/stdc++.h>
using namespace std;

int valid(string s){
    int l = s.length();
    if(l==0) return 1;
    else if(l%2) return 0;
    else{
        stack<char>bar;
        for(int i=0; s[i]; i++){
            if(s[i]=='(' || s[i]=='[') bar.push(s[i]);
            else{
                if(s[i]==')'){
                    if(bar.top() == '(')  bar.pop();
                    else return 0;
                }
                else if(s[i]==']'){
                    if(bar.top() == '[') bar.pop();
                    else return 0;
                }
            }
        }
        return 1;
    }
}

int main(){
    int n;cin>>n;
    string foo;
    while(n--){
        cin>>foo;
        if(valid(foo))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
