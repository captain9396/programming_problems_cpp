#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1)
#define SIZE 100005
#define max3(a,b,c) max(max(a,b),c)
#define max4(a,b,c,d) max(max(a,b), max(c,d))
#define TAKEINP(ara) for(i=0; i<n; i++) cin >> ara[i]
#define push_back psb
#define pop_back pob
#define ll long long

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    long long n, i;
	long long ara[5005], cnt = 0;
	cin >> n;
	cin >> ara[0];
	for(i=1; i<n; i++){
		cin >> ara[i];
		if(ara[i-1] > ara[i]){
			cnt+=(ara[i-1] - ara[i]);
		}
	}
	cout << cnt;
    return 0;
}
