#include<stdio.h>
int main()
{
	int n,a,s;
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		scanf("%d",&a);
		if (s<a) 
		{
			s=a;
		}
	}
	printf("%d",s);
	return 0;
}
