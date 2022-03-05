#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10086];char c[10086];
	int n;int m;int sum=0;int cnt=0;
	scanf("%d",&n);
	int i,j;int t=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<18;j++)
		{
			if(j!=17)
			{
				scanf("%d",&a[i]);
			}
			else if(j==17)
			{
				scanf("%c",&m);
			}
			sum+=a[j];
		}
		sum=sum+7+9+10+5+8+4+2+1+6+3+7+9+10+5+8+4+2;
		sum%=11;
		if(sum==0)
		{
			if(m!=1)
			{
				t=1;
				for(j=0;j<18;j++)
				{
					printf("%c",a[i]); 
				}
				
				
			}
		}
		else if(sum==1)
		{
			if(m!=0)
			{
				t=1;
				for(j=0;j<18;j++)
				{
					printf("%c",a[i]); 
				}
				
			}
		}
		else if(sum==2)
		{
			if(m!='X')
			{
				t=1;
				for(j=0;j<18;j++)
				{
					printf("%c",a[i]); 
				}
			}
		}
		else if(sum==3)
		{
			if(m!=9)
			{
				t=1;
				for(j=0;j<18;j++)
				{
					printf("%c",a[i]); 
				}
			}
		}
		else if(sum==4)
		{
			if(m!=8)
			{
				t=1;
				for(j=0;j<18;j++)
				{
					printf("%c",a[i]); 
				}
			}
		}
		else if(sum==5)
		{
			if(m!=7)
			{
				t=1;
				for(j=0;j<18;j++)
				{
					printf("%c",a[i]); 
				}
			}
		}
		else if(sum==6)
		{
			if(m!=6)
			{
				t=1;
				for(j=0;j<18;j++)
				{
					printf("%c",a[i]); 
				}
			}
		}
		else if(sum==7)
		{
			if(m!=5)
			{
				t=1;
				for(j=0;j<18;j++)
				{
					printf("%c",a[i]); 
				}
			}
		}
		else if(sum==8)
		{
			if(m!=4)
			{
				t=1;
				for(j=0;j<18;j++)
				{
					printf("%c",a[i]); 
				}
			}
		}
		else if(sum==9)
		{
			if(m!=3)
			{
				t=1;
				for(j=0;j<18;j++)
				{
					printf("%c",a[i]); 
				}
			}
		}
		else if(sum==10)
		{
			if(m!=2)
			{
				t=1;
				for(j=0;j<18;j++)
				{
					printf("%c",a[i]); 
				}
			}
		}
		
	}
	if(t==0)
	{
		printf("All passed");
	}
	return 0;
 } 
