#include<stdio.h>
int main()
{
	int n=0,sum=0,n1=1,n2=1;
	scanf("%d",&n);
	if(n==1||n==2)
	  {
	  	printf("1\n");
	   } 
	else {
	      for(int i=3;i<=n;i++)
	         {
	   	      sum=n1+n2;
	   	      n1=n2;
	   	      n2=sum;
	          }
	    }
	printf("%d\n",sum); 
	return 0;
	
}
