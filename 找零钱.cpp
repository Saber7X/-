#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int num[5]={50,20,10,5,1};
		for(int i=0;i<5;i++)
		{
			if(n/num[i]!=0)
			{
				printf("%d*%d",num[i],n/num[i]);
				n=n-num[i]*(n/num[i]);
				if(n!=0)
				{
					printf("+");
				}
			}
		}
		printf("\n");
		
	}
	return 0;
}
