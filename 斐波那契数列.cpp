#include<stdio.h>
int main()
{
	int n,sum,n1,n2=1;
	scanf("%d\n",&n);
	if(n==1||n==2)
	  {
	  	printf("1\n");
	   } 
	else {
	      for(int i=3;i<n;i++)
	         {
	   	      sum=n1+n2;
	   	      n1=n2;
	   	      n2=sum;
	          }
	    }
	printf("%d\n",sum); 
	return 0;
	
}
