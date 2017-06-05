#include<bits/stdc++.h>
using namespace std;
int a[1007][1007];
int n, m, k;
void col(int a[][1007], int n1, int n2){
    for(int i=0; i<n; i++) swap(a[i][n1], a[i][n2]);
}
void row(int a[][1007], int n1, int n2){
    for(int i=0; i<m; i++) swap(a[n1][i], a[n2][i]);
}
void printM(int a[][1007])
{
    for(int i =0 ; i<n; i++){
        for(int j=0; j<m; j++) cout << a[i][j] << " ";
        cout << "\n";
    }
    cout << "\n\n";
}
int main()
{
    int i, j, n1, n2;
    char ss;
    cin >> n >> m >> k;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++) scanf("%d", &a[i][j]);
    }
    for(i=0; i<k; i++){
        cin >> ss >> n1 >> n2;
        if(ss=='g') printf("%d\n",a[n1-1][n2-1]);
        else if(ss=='c') col(a,n1-1,n2-1);
        else row(a,n1-1,n2-1);
        //printM(a);
    }
    return 0;
}
