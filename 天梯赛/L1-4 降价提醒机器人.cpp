#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double flag;
	double x;
	cin>>n>>flag;
	while(n--)
	{
		cin>>x;
		if(x<flag)
		{
			printf("On Sale! %.1lf\n",x);
		}
	}
	return 0;
}
