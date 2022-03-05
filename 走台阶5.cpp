#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0;
	int num[100];
	int n=4;
	int cnt1=0;
	for(int i=1;i<=3;i++)
	{
		num[cnt]=i;
		cnt++;
		if(n-i==0)
		{
			for(int d=0;d<cnt;d++)
			{
				printf("%d",num[d]);
			}
			cnt--;
			break;
		}
		else if(n-i<0)
		{
			cnt--;
			break;
		}
		for(int j=1;j<=3;j++)
		{
			num[cnt]=j;
			cnt++;
			if(n-i-j==0)
			{
				for(int d=0;d<cnt;d++)
				{
					printf("%d ",num[d]);
				}
				printf("\n");
				cnt--;
				cnt1++;
				break;
			}
			if(n-i-j<0)
			{
				cnt--;
				break;
			}
			for(int k=1;k<=3;k++)
			{
				num[cnt]=k;
				cnt++; 
				if(n-i-j-k==0)
				{
					for(int d=0;d<cnt;d++)
					{
						printf("%d ",num[d]);
					}
					printf("\n");
					cnt--;
					cnt1++;
					break;
				}
				else if(n-i-j-k<0)
				{
					cnt--;
					break;
				}
				for(int t=1;t<=3;t++)
				{
					num[cnt]=t;
					cnt++;
					if(n-i-j-k-t==0)
					{
						for(int d=0;d<cnt;d++)
						{
							printf("%d ",num[d]);
						}
						printf("\n");
						cnt--;
						cnt1++;
						break;
					}
					if(n-i-j-k-t<0)
					{
						cnt--;
						break;
					}
				cnt--;	
				}
			cnt--;	
			}
		cnt--;	
		}
	cnt--;	
	}
	printf("%d",cnt1);
	return 0; 
} 
