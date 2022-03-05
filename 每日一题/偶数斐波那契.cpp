#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a=1;
	int b=2;
	int sum=2;
	int c;
	while(1)
	{
		if(sum>4000000)
		{
			cout<<sum;
			break;
		}
		c=a+b;
		if(c%2==0)
		{
			sum+=c;
		}
		a=b;
		b=c;
		
	}
	return 0;
}
//4613732 
