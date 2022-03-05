#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	if(n-2*m==0)
	  {
	  	printf("%d 0",m);
	  }
	else if  (n-4*m==0)
	         {
	         	printf("0 %d",m);
			 }
	else
	printf("%d %d",(4*m-n)/2,m-(4*m-n)/2);
	return 0;
}
