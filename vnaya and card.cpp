#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, x, sum = 0,i, ara[1005], count =0 ;
	cin >> n >> x;
	for(i=0; i<n; i++)
	{
		cin >> ara[i]; sum+=ara[i];
	}
	
	if(sum>0)
	{
		i = -x;
		while(1)
		{
			if(abs(i) > sum) i-=1;
			else if(sum % abs(i) == 0)
			{
				count+=sum/abs(i);
				cout << count;
				break;
			}
			else
			{
				count+=sum/abs(i);
				sum-=(count*abs(i));
				i-=1;
			} 
		}
	}
//	else if(sum < 0) cout << (-sum)/x +  (-sum%x);
//	else cout << "0";
	return 0;
}
