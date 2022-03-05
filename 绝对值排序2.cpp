#include<stdio.h>
#include<math.h>
int main()
{
	int n,a;int num[100]={101};
	while(scanf("%d",&n)!=EOF)
	{
		scanf("%d",&a);
		
		num[abs(a)]=a;
	
	}
		for(int i=0;i<=100;i++)
		{
			printf("%d",num[i]);
			if(num[i]==101)
			{
				printf("\b\b\b");
			}
		}
	return 0;
}
 
