#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i  , j , k, f1=0, f2=0, f3=0, f4=0, ind1, ind2, ind3, ind4;
    char st[100005], sq1[110] , sq2[110];
    cin >> st >> sq1 >> sq2;

    if(strlen(st)<= strlen(sq1) || strlen(st)<=strlen(sq2)){
        cout << "fantasy";
        return 0;
    }
    int intro = 1;
    for(i=0; i<10; i++){
        if(st[i]!='a'){
            intro = 0;
            break;
        }
    }
    if(intro){
        cout << "forward";
        return 0;
    }

    for(i=0; i<=strlen(st) - strlen(sq1); i++){
        if(st[i] == sq1[0]){
            f1 = 1; ind1 = i;
            for(j=i, k=0; sq1[k] ;){
                if(st[j++] != sq1[k++]){
                    f1 = 0;
                    break;
                }
            }
            if(f1){
                f1 = 1; break;
            }
        }
    }

    if(f1){
        for(i=ind1+strlen(sq1) ; st[i] ; i++){
            if(st[i] == sq2[0]){
                f2 = 1; ind2 = i;
                for(j=i, k=0; sq2[k] ;){
                    if(st[j++] != sq2[k++]){
                        f2 = 0;
                        break;
                    }
                }
                if(f2){
                    f2 = 1; break;
                }
            }
        }
    }


    for(i=strlen(st); i>=0; i--){
        if(st[i] == sq1[strlen(sq1) - 1]){
            f3 = 1; ind3 = i;
            for(j=i, k=strlen(sq1) - 1 ; k>=0 ;){
                if(st[j--] != sq1[k--]){
                    f3 = 0;
                    break;
                }
            }
            if(f3){
                f3 = 1; break;
            }
        }
    }

    if(f3){
        for(i=ind3- strlen(sq1); i>=0; i--){
            if(st[i] == sq2[strlen(sq2) - 1]){
                f4 = 1; ind4 = i;
                for(j=i, k=strlen(sq2) - 1 ; k>=0 ;){
                    if(st[j--] != sq2[k--]){
                        f4 = 0;
                        break;
                    }
                }
                if(f4){
                    f4 = 1; break;
                }
            }
        }
    }


    if((f1==1 && f2==1) && (f3==0 || f4==0)) cout << "forward"<< endl;
    else if((f1==0 || f2==0) && (f3==1 && f4==1)) cout << "backward" << endl;
    else if((f1==1 && f2==1) && (f3==1 && f4==1)) cout << "both" << endl;
    else cout << "fantasy" << endl;
 //   if(f1==1 && f2==1) cout << "yes";
 //   else cout << "NO";
 //   cout <<f1 << " "<<f2 << " "<<f3 << " "<<f4 << " ";

    return 0;
}
