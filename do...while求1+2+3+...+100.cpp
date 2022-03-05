#include<stdio.h>
int main()
{
	int i=1,
	sum=0;
	do{sum=sum+i;i=i+1;}//do while中不用i++，用i=i+1 
	while(i<=100);
	printf("%d\n",sum);
	return 0;
}
 
