#include<stdio.h>
#include<string.h>
int main()
{
	int t,sum=0,b;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		char a[60];
		scanf("%s",&a);
		for(int i=0;i<strlen(a);i++)
		{
			b=a[i]-'0';
			if(b==1||b==2||b==4||b==5||b==7)
			{
				sum++;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
