#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, cnt = 0;
    long long a[100005], b[100005];
    cin >> n;
    for(i=0; i<n; i++) scanf("%I64d", &a[i]) , b[i] = a[i];
    sort(a, a+n);
    for(i=0; i<n; i++){
        if(a[i] != b[i]) cnt++;
        if(cnt>2){
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}
