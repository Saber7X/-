#include<stdio.h>
int main()
{
	int n,n1,n2,i,ans;
	scanf("%d",&n);
	if(n==1||n==2)
	  {
	  	printf("1");
	  }
	else
	{
		for(i=2;i<n;i++)
		   {
		   	 ans=n1+n2;
		   	 n1=n2;
		   	 n2=ans;
		   }
   printf("%d",n1+n2);
		
	}
    return 0;
}
