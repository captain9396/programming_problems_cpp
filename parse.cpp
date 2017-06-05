///volume_submit.php?problem=


#include<bits/stdc++.h>
using namespace std;

string given = "volume_submit.php?problem=";

int main(){
    string foo;
    ifstream fin("parsing.txt");
    ofstream fout("outputing.txt");
    fin >> foo;
//    for(int i = 0 ; i < foo.length() -10 ; i++){
//        if(foo[i] == 'v'){
//            int k = 0 ;
//            int f = 1;
//            int j;
//            for( j = i ; given[k] ; j++ , k++ ){
//                if(given[k] != foo[j]){
//                    f = 0;
//                    break;
//                }
//            }
//            if(f){
//                cout << foo[j] + foo[j+1] + foo[j+2] + foo[j+3] << endl;
//            }
//        }
//    }
    fout << foo;

    return 0;
}
