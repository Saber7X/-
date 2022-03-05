#include<stdio.h>
int main()
{
	int i,j;
	scanf("%d/%d",&i,&j);
	int a=i;
	int b=j;
	int t;//要赋值的变量需要在值出现的后面 
	while(b>0)
	{
		t=a%b;
		a=b;
		b=t;
	}//b等于0时循环结束，所以最大公约数是a 
	printf("最大公约数是%d\n%d/%d",a,i/a,j/a); 
	return 0;
}
