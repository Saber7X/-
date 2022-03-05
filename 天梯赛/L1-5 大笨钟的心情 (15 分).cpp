#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num[25]={0};
	for(int i=0;i<24;i++)
	{
		cin>>num[i];
		
	}
	int x;
	while(scanf("%d",&x)!=EOF)
	{
		if(x>=24||x<0)
		{
			break;
		}
		if(num[x]>50)
		{
			printf("%d Yes\n",num[x]);
		}
		else
		{
			printf("%d No\n",num[x]);
		}
	}
	return 0;
}
