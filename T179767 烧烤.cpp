#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m;
	cin>>n>>m;
	long long int min=1;
	while(1)
	{
		
		n-=(3*m+2);
		if(n<=0)
		{
			break;
		}
		min++;
	}
	cout<<min;
	return 0;
}
