#include<stdio.h>
int main()
{
	int a,n;
	scanf("%d %d",&a,&n);
	int sum=0;
	int t=0;
	for(int i=0;i<n;i++)//0*10+2 2*10+2 
	 {   
		t=t*10+a;
		sum+=t;
	 }
	 printf("%d",sum);
	return 0;
 } 
