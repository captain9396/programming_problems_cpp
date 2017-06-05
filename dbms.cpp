#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("database.txt");
    ofstream fout("dataout.txt");
    double x , y;
    for(int i = 0 ; i < 30 ; i++){
        fin >> x >> y;
        fout << 14050 << 61 + i << "  ---->  " << x + y << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
