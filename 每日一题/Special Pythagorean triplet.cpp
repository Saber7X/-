#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=1;i<=1000;i++)
	{
		for(int j=1;j<=1000;j++)
		{
			for(int k=1;k<=1000;k++)
			{
				if(i*i+j*j==k*k&&i+j+k==1000)
				{
					printf("a=%d b=%d c=%d\n",i,j,k);
					printf("a*b*c=%d\n",i*j*k);
					//break;
				}
			}
		}
	}
	return 0;
}
