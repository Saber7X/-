#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0;
	for(int i=1;i<=10000;i++)
	{
		if(i*i*i%10==i&&i<10&&i>=1)
		{
			cnt++;
		}
		if(i*i*i%100==i&&i<100&&i>=10)
		{
			cnt++;
		}
		if(i*i*i%1000==i&&i<1000&&i>=100)
		{
			cnt++;
		}
		if(i*i*i%10000==i&&i<=10000&&i>=1000)
		{
			cnt++;
		}
		
	}
	printf("%d",cnt);
	return 0;
	
}
