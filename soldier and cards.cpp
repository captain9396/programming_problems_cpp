#include<bits/stdc++.h>
using namespace std;
queue<int>foo, bar;
int main(){
    int n,a ,T;cin>>n;
    scanf("%d", &a);
    while(a--){
        scanf("%d" , &T);
        foo.push(T);
    }
    scanf("%d", &a);
    while(a--){
        scanf("%d" , &T);
        bar.push(T);
    }
    for(int i=0;  i<=100000; i++){
        if(foo.empty()){
            printf("%d 2", i);
            return 0;
        }
        if(bar.empty()){
            printf("%d 1", i);
            return 0;
        }


        if(foo.front() > bar.front()){
            foo.push(bar.front());
            foo.push(foo.front());
            foo.pop(); bar.pop();
        }
        else{
            bar.push(foo.front());
            bar.push(bar.front());
            bar.pop(); foo.pop();
        }
    }
    cout<<-1;
    return 0;
}
