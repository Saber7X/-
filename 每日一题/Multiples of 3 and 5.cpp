#include<bits/stdc++.h>
using namespace std;
int  main()
{
	long int n;
	long long int sum=0;
	for(int i=1;i<1000;i++)
	{
		if(i%5==0||i%3==0)
		{
			sum+=i;
		}
	}
	cout<<sum;
	return 0;
}
//233168
