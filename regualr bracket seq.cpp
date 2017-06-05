#include<bits/stdc++.h>
using namespace std;
stack<char>foo;
int main(){
    string s;
    cin>>s;
    foo.push('0');
    for(int i=0; s[i]; i++){
        if(s[i]=='(') foo.push('(');
        else {
            if(foo.top() == '('){
                foo.pop();
            }
            else foo.push(')');
        }
    }
    cout<<s.length() - foo.size() + 1;
    return 0;
}
