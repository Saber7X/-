#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,m;
	
	while(scanf("%d %d",&l,&m)!=EOF)
	{
		if(l==0&&m==0)
		{
			break;
		}
		int i,j,k;
		int a,b;
		int s[10001]={0},c[10001]={0};//区间
		for(i=0;i<m;i++)//区间个数 
		{
			scanf("%d %d",&a,&b);
			
			if(a>b)
			{
				for(j=b;j<=a;j++)
				{
					s[j]=1;
					//printf("%d\n",j);
				}
			}
			else
			{
				for(j=a;j<=b;j++)
				{
					s[j]=1;
					//printf("%d\n",j);
				}
			}
			//printf("%d %d\n",a,b);
		}
		int n=l+1;
		for(i=0;i<=l;i++)
		{
			if(s[i]==1)
			{
				n--;
			}
		}
		printf("%d\n",n);
	}
	
	return 0;
}
