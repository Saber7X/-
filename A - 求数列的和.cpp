#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,m;
	while(cin>>n>>m)
	{
		double sum=0;
		while(m--)
		{
			sum+=n;
			n=sqrt(n);
		}
		printf("%.2f\n",sum);
	}
	return 0;
}
