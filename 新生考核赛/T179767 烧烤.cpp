#include<stdio.h>
int main()
{
	int n,m,k=0;
	scanf("%d%d",&n,&m);
	k=n/(3*m+2);
	if(n%(3*m+2)!=0) k++;
	printf("%d",k);
	return 0;
}
