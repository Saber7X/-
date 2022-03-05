#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0;
	int num[100];
	int n=0;
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			if(i+j==4) 
			{
				n=0;
				num[n]=i;
				n++;
				num[n]=j;
				n++;
				for(int d=0;d<n;d++)
				{
					printf("%d ",num[d]);
				}
				printf("\n");
				cnt++;
				break;
			}
			for(int k=1;k<=3;k++)
			{
				if(i+j+k==4) 
				{
					n=0;
					num[n]=i;
					n++;
					num[n]=j;
					n++;
					num[n]=k;
					n++;
					for(int d=0;d<n;d++)
					{
						printf("%d ",num[d]);
					}
					printf("\n");
					cnt++;
					break;
				}
				
				for(int t=1;t<=3;t++)
				{
					if(i+j+k+t==4) 
					{
						n=0;
						num[n]=i;
						n++;
						num[n]=j;
						n++;
						num[n]=k;
						n++;
						num[n]=t;
						n++;
						for(int d=0;d<n;d++)
						{
							printf("%d ",num[d]);
						}
						printf("\n");
						cnt++;
						break;
					}
				}
			}
		}
	}
	printf("%d",cnt);
	return 0; 
} 
