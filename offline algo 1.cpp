#include<bits/stdc++.h>
using namespace std;

int A[101010];

void Max_Heapify(int node , int n){
  int left = (node * 2) + 1 , right = (node*2) + 2;
  int cur = node;
  if(A[node] < A[left] && left < n) cur = left;
  if(A[cur] < A[right] && right < n) cur = right;

  if(cur != node){
    swap(A[cur] , A[node]);
    Max_Heapify(cur , n);
  }
}

void Build_Heap(int n){
  for(int i = (n/2) + 1 ; i >= 0 ; i--) Max_Heapify(i , n);
}

void HeapSort(int n){
  Build_Heap(n);
  for(int i = n - 1 , j = 1;  i >= 1 ; i-- , j++){
    swap(A[i] , A[0]);
    Max_Heapify(0 , n-j);
  }
}

int main(){
  ios_base:: sync_with_stdio(0) ; cin.tie(0) ;
  int n ; cin >> n;
  for(int i = 0 ; i < n ; i++) A[i] = n - i;
  HeapSort(n);

  for(int i = 0 ; i < n ; i++) cout << A[i] << ' ';

  return 0;
}
