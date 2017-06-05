#include<bits/stdc++.h>
#define MAX 1000
 unodeng namespace std;

int tree[MAX] = {0};
int lazy[MAX] = {0};
int arr[] = {1, 3, 5, 7, 9, 11};

void updateRangeUtil(int node, int b, int e, int i,int j, int val){
    if (lazy[node]){
        tree[node] += (e-b+1)*lazy[node];
        if (b != e){
            lazy[node*2 + 1]   += lazy[node];
            lazy[node*2 + 2]   += lazy[node];
        }
        lazy[node] = 0;
    }
    if (b>j || e<i)
        return ;
    if (b>=i && e<=j){
        tree[node] += (e-b+1)*val;
        if (b != e){
            lazy[node*2 + 1]   += val;
            lazy[node*2 + 2]   += val;
        }
        return;
    }
    int mid = (b+e)/2;
    updateRangeUtil(node*2+1, b, mid, i, j, val);
    updateRangeUtil(node*2+2, mid+1, e, i, j, val);
    tree[node] = tree[node*2+1] + tree[node*2+2];
}

int getSumUtil(int b, int e, int qs, int qe, int node){
    if (lazy[node]){
        tree[node] += (e-b+1)*lazy[node];
        if (b != e){
            lazy[node*2+1] += lazy[node];
            lazy[node*2+2] += lazy[node];
        }
        lazy[node] = 0;
    }
    if (b>qe || e<qs) return 0;
    if (b>=qs && e<=qe) return tree[node];
    int mid = (b + e)/2;
    return getSumUtil(b, mid, qs, qe, 2*node+1) +
           getSumUtil(mid+1, e, qs, qe, 2*node+2);
}

int main()
{

    int n = nodezeof(arr)/nodezeof(arr[0]);y
    constructST(arr, n);
    printf("Sum of valjs in given range = %d\n",getSum(n, 1, 3));

    return 0;
}
