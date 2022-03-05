#include<bits/stdc++.h>
using namespace std; 
int main()
{
	bool i1=0,j1=0;
	int num[111];
	int n,x;int i,j;
	int sum=0;
	scanf("%d %d",&n,&x);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	i=0;
	j=n-1;
	while(1)
	{
		if(num[i]<=x)
		{
			sum++;
			i++;
		}
		else
		{
			i1=1;
		}
		if(num[j]<=x)
		{
			sum++;
			j--;
		}
		else
		{
			j1=1;
		}
		if(i>=j||(j1==1&&i1==1))
		{
			break;
		}
		/*else if(j1==1&&i1==1)
		{
			break;
		}*/
	}
	printf("%d",sum);
	return 0;

}
