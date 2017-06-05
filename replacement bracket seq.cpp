#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt = 0;
    stack<char>foo;
    foo.push('0');
    string s;
    cin>>s;
    for(int i=0; s[i]; i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'||s[i]=='<'){
            foo.push(s[i]);
        }
        else{
            if(s[i]==')'){
                if(foo.top()=='{'||foo.top()=='['||foo.top()=='<') cnt++, foo.pop();
                else if(foo.top()=='(') foo.pop();
                else foo.push(s[i]);
            }
            else if(s[i]=='}'){
                if(foo.top()=='('||foo.top()=='['||foo.top()=='<') cnt++, foo.pop();
                else if(foo.top()=='{') foo.pop();
                else foo.push(s[i]);
            }
            else if(s[i]==']'){
                if(foo.top()=='{'||foo.top()=='('||foo.top()=='<') cnt++, foo.pop();
                else if(foo.top()=='[') foo.pop();
                else foo.push(s[i]);
            }
            else{
                if(foo.top()=='{'||foo.top()=='['||foo.top()=='(') cnt++, foo.pop();
                else if(foo.top()=='<') foo.pop();
                else foo.push(s[i]);
            }
        }
    }
    if(foo.size() > 1)  cout<<"Impossible";
    else cout<<cnt;
    return 0;
}
