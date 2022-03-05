#include<stdio.h>
#include<string.h>
int main()
{
	char num[100000];
	int cnt=0;
	int i;
	char t;
	gets(num);
	int b=strlen(num);
	scanf("%c",&t);
	for(i=0;i<=b;i++)
	{
		if(num[i]==t)
		{
			cnt++; 
		}
	}
	printf("%d",cnt);
	return 0;
}
