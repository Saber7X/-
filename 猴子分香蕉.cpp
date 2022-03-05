#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0;
	int num[5]={1,2,3,4,0};
	for(int i=1;i<=1000000000;i++)
	{
		int sum=i;
		//sum=sum%5;
		if(sum%5==1)
		{
			sum=sum-(sum-1)/5-1;
			if(sum%5==2)
			{
				sum=sum-(sum-2)/5-2;
				if(sum%5==3)
				{
					sum=sum-(sum-3)/5-3;
					if(sum%5==4)
					{
						sum=sum-(sum-4)/5-4;
						if(sum%5==0)
						{
							printf("%d\n",i);
						}
					}
				}
			}
		}
		
	}
	return 0;
 } 
