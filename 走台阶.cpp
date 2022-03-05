#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0;
	int n=0;
	for(int i=1;i<=3;i++)
	{
		n=4;
		int num[100]={0};
		cnt=0;
		num[cnt]=i;
		for(int j=1;j<=3;j++)
		{
			num[n]=j;
			n++;
			if(n-i-j==0)
			{
				
			}
			if(i+j==4) 
			{
				
				
				cnt++;
				break;
			}
			for(int k=1;k<=3;k++)
			{
				num[n]=k;
				n++;
				if(i+j+k==4) 
				{
					cnt++;
					break;
				}
				
				for(int t=1;t<=3;t++)
				{
					num[n]=t;
					if(i+j+k+t==4) 
					{
						cnt++;
						break;
					}
				}
			}
		}
	}
	printf("%d",cnt);
} 
