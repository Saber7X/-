#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=9999999999999;
	int a;
	int sum;
	while(1)
	{
		sum=0;
		while(n>0)
		{
			a=n%10;
			sum=sum+a*a;
			n/=10;
		}
		n=sum;
		printf("%d\n",sum);
	}
	return 0;
}
