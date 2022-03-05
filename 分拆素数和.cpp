#include<bits/stdc++.h>
using namespace std;
void panduan(int a)
{
	int i,j,k,t,s,cnt=0;
	for(i=2;i<a;i++)
	{
		for(j=2;j<=sqrt(i)+1;j++)
		{	
			t=1;
			if(i==2)
			{
				t==1;
				break;
			}
			else if(i%j==0)
			{
				t=0;
				break;
			}
		}
		if(t==1)
		{
			k=a-i;
			for(j=2;j<=sqrt(k)+1;j++)
			{	
				s=1;
				if(k==1)
				{
					s=0;
					break;
				}
				else if(k==2)
				{
					s=1;
					break;
				}
				else if(k%j==0)
				{
					s=0;
					break;
				}
			}
		}
		if(t==1&&s==1)
		{
			cnt++;
		}
	
	}
	printf("%d",cnt/2);
	
}
int main()
{
	int a[666];
	int n=1,m;
	int i=0,j,k;
	while(n>0)
	{
		scanf("%d",&n);
		if(n==0) break;
		a[i]=n;
		i++;
		
	}
	m=i; 
	for(i=0;i<m;i++)
	{
		panduan(a[i]);
		printf("\n");
		
		//printf("%d",a[j]);
	}
	return 0;
}
