#include<bits/stdc++.h>
using namespace std;
string alpha = "ZABCDEFGHIJKLMNOPQRSTUVWXY";


int power(int n, int p){
   int ans = 1;
   for(int i=0; i<p; i++){
      ans = ans*n;
   }
   return ans;
}

int string_to_num(string s){
   int l = s.length(), t = 0, ans = 0;
   for(int i =l-1; i>=0; i--, t++){
      ans+=((s[i] - '0') * power(10,t));
   }
   return ans;
}

string numtoab(int n){
    string ss = "";

    return ss;
}

int abtonum(string s){
   int l = s.length() , t = 0, ans = 0;
   for(int  i =l-1; i>=0; i--, t++){
      ans +=( ((s[i] - 'A') + 1) * power(26,t));
   }
   return ans;
}

int main(){
 /*  int n;
   cin>>n;
   while(n--){
      string s;
      cin>>s;
      if(s[0] == 'R' && isalpha(s[1])==0){
         int i;
         string temp = "", col = "";
         for(i=1; s[i]!='C'; i++){
            temp = temp + s[i];
         }
         for(int j = i+1; s[j]; j++){
            col = col + s[j];
         }
         cout<<numtoab( string_to_num(col) ) << temp<<endl;
      }
      else {
         string temp = "", num = "";
         for(int i =0; s[i]; i++){
            if(isalpha(s[i])) temp= temp + s[i];
            else num = num + s[i];
         }
         cout<<'R'<<num<<'C'<<abtonum(temp)<<endl;
      }
   }
  /* int n;
   cin>>n;
   cout<<numtoab(n);*/

   string s; cin>>s;
   cout<<abtonum(s);

   return 0;
}
