#include<stdio.h>
int main()
{
	int num[50],ans,i,n;
	scanf("%d",&n);
	if(n==1||n==2)
	  {
	  	num[0]=1;
	  	num[1]=1;
	  	printf("1");
	  }
	for(i=3;i<=n;i++)
		{
		  ans=num[i-3]+num[i-2];
		  num[i-3]=num[i-2];
		  ans=num[i-2];
		  
		     
		}
	printf("%d",num[i-3]+num[i-2]);
	
return 0;
}
