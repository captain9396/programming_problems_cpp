#include<bits/stdc++.h>
using namespace std;
int A[101010];


void HeapSort(int b , int e){
  int n = e - b + 1;
  make_heap(A , A + n);
  int pos = e - b;
  for(int i = 0; i < n ; i++){
    swap(A[pos] , A[0]);

    make_heap(A , A + pos);
    pos--;
  }
}


int main(){
  int n ; cin>>n;
  for(int i = 0 ; i < n ; i++) A[i] = n - i;
  HeapSort(0 , n - 1);
  for(int i =0 ; i < n ; i++) cout << A[i]<<" ";
  return 0;
}
