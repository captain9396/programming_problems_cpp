#include<bits/stdc++.h>
#define MAX(a,b) (((a)>(b)) ? (a) : (b))
#define MIN(a,b) (((a)<(b)) ? (a) : (b))
#define ABS(x) (((x) >= 0) ? (x) : -(x))
using namespace std;

const int N  = 505;

vector<int> row , col;

int mat[N][N] , arr[100005] , arr2[100005] , ans1 , ans2;
int is[100005 / 32];
bool check(int n , int pos){ return (bool)(n & (1 << pos));}
int Set(int n , int pos){ return n = (n | (1 << pos));}

void sieve(){
  is[0] = Set(is[0] , 0); is[0] = Set(is[0] , 1);
  for(int i = 3 ; i * i  <= 100005 ; i+=2){
    if(check(is[i >> 5] , i & 31) == 0){
      for(int j = i * i ; j<= 100005 ; j+=(i << 1)){
        is[j >> 5] = Set(is[j >> 5] , j & 31);
      }
    }
  }
  for(int j = 4 ; j <= 100005 ; j+=2){
    is[j >> 5] = Set(is[j >> 5] , j & 31);
  }
}

int main(){
  int n ,  m;  cin>>n>>m;
  for(int i = 0 ; i < n ; i++)
    for(int j = 0 ; j < m ; j++)
      scanf("%d"  , &mat[i][j]);


  sieve();

  int track = 100003;

  for(int i = 100005 ; i >= 0; i--){
    if(check(is[i >> 5]  , i & 31) == true) arr[i] = track;
    else{
        arr[i] = i; track = i;
    }
  }

  for(int i = 0  ; i < n; i++){
    int A = 0;
    for(int j = 0 ;j  < m ; j++){
      if(check(is[mat[i][j] >> 5]  , mat[i][j] & 31)) A += (arr[mat[i][j]]  -  mat[i][j]) ;
    }

    row.push_back(A);
  }



  for(int i = 0  ; i < m; i++){
    int A = 0;
    for(int j = 0 ;j  < n ; j++){
      if(check(is[mat[j][i] >> 5]  , mat[j][i] & 31)) A += (arr[mat[j][i]]  -  mat[j][i]);
    }
    col.push_back(A);
  }


  sort(row.begin() , row.end());
  sort(col.begin() , col.end());

  printf("%d" , min(row[0] , col[0]));

  return 0;
}
