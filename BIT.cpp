#include <iostream>
using namespace std;


int getSum(int BITree[], int idx){
    int sum = 0;
    idx = idx + 1;
    while (idx>0){
      sum += BITree[idx];
      idx -= idx & (-idx);
    }
    return sum;
}


void updateBIT(int BITree[], int n, int idx, int val){
    ++idx;
    while (idx <= n){
      BITree[idx] += val;
      idx += idx & (-idx);
    }
}


int *constructBITree(int arr[], int n){
   int *BITree = new int[n+1];
   for (int i=1; i<=n; i++)
      BITree[i] = 0;

   for (int i=0; i<n; i++)
      updateBIT(BITree, n, i, arr[i]);
    return BITree;
}



int main(){
    int freq[] = {2, 1, 1, 3, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(freq)/sizeof(freq[0]);
    int *BITree = constructBITree(freq, n);
    cout << "Sum of elements in arr[0..5] is "<< getSum(BITree, 5);


    freq[3] += 6;
    updateBIT(BITree, n, 3, 6);

    cout << "\nSum of elements in arr[0..5] after update is "<< getSum(BITree, 5);

    return 0;
}
