#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[10000];
	scanf("%s",&a);
	int b=strlen(a);
	int i,j,k;
	int num[10000];
	for(i=0;i<b;i++)
	{
		if(a[i]=='1')
		{
			num[1]++;
		}
		if(a[i]=='2')
		{
			num[2]++;
		}
		if(a[i]=='3')
		{
			num[3]++;
		}
		if(a[i]=='4')
		{
			num[4]++;
		}
		if(a[i]=='5')
		{
			num[5]++;
		}
		if(a[i]=='6')
		{
			num[6]++;
		}
		if(a[i]=='7')
		{
			num[7]++;
		}
		if(a[i]=='8')
		{
			num[8]++;
		}
		if(a[i]=='9')
		{
			num[9]++;
		}
		if(a[i]=='0')
		{
			num[0]++;
		}
	}
	for(i=0;i<=9;i++)
	{
		if(num[i]!=0)
		{
			printf("%d:%d\n",i,num[i]);
		}
	}
	return 0;
 } 
