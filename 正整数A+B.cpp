#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[1000];
	char b[1000];int f=1;int f1=1,c1=0,c=0;
	scanf("%s",&a);
	getchar();
	int i;
	cin.getline(b,101);
	int lena=strlen(a);
	int lenb=strlen(b);
	for(i=0;i<lena;i++)//不在的情况
	{
		if(a[i]<'0'||a[i]>'9')
		{
			f=0;
			break;
		}
		c=c*10;
		c=c+(a[i]-'0');
		//printf("%d\n",c);
	}
	for(i=0;i<=lenb;i++)
	{
		c=0;
		if(b[i]<'0'||b[i]>'9')
		{
			f1=0;
			break;
		}
		c1=c*10;
		c1=c+(b[i]-'0');
	}
	if(f==1&&f1==1)//各种情况判断即可 
	{
		printf("%d + %d = %d",c,c1,c+c1);
	}
	else if(f==0&&f1==1)
	{
		printf("? + %d = ?",c1);
	}
	else if(f==0&&f1==0)
	{
		printf("? + ? = ?");
	}
	else if(f==1&&f1==0)
	{
		printf("%d + ? = ?",c);
	}
	return 0;
 } 
