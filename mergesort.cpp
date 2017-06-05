#include<bits/stdc++.h>
using namespace std;

int A[100000 + 7];

void Merge(int s , int mid , int e){
  vector<int>left , right;
  int n = mid - s + 1 , m = e - mid;
  int posL = s , posR = mid+1;
  for(int i = 0; i < n ; i++ , posL++) left.push_back(A[posL]);
  for(int i = 0 ; i< m  ; i++ , posR++) right.push_back(A[posR]);
  left.push_back(1000000) ; right.push_back(1000000);
  int pos = s , pos1= 0  , pos2 = 0;
  for(int i = 0 ; i < m  + n ; i++ , pos++){
    if(left[pos1] < right[pos2]){
      A[pos] = left[pos1++];
    }
    else{
      A[pos] = right[pos2++];
    }
  }
}

void MergeSort(int s , int e){
  if(s == e) return;
  int mid = (s + e) / 2 ;
  MergeSort(s , mid);
  MergeSort(mid+1 , e);
  Merge(s , mid  , e);
}


int main(){

  for(int i = 0 ; i  <  1000 ; i++) A[i] = 1000 - i;
  MergeSort(0 , 999);
  for(int i = 0 ; i < 1000 ; i++) cout << A[i] << " ";
  return 0;
}
