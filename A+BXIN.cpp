#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[20],b[20];
	while(scanf("%s %s",&a,&b)!=EOF)
	{
		long long int sum1=0;
		long long int sum2=0;
		long long int lena=strlen(a);
		long long int lenb=strlen(b);
		long long int n=1,m=1;
		if(a[0]=='-')
		{
			n=-n;
		}
		if(b[0]=='-')
		{
			m=-m;
		}
		for(long long int i=0;i<lena;i++)
		{
			if(a[i]>='0'&&a[i]<='9')
			{
				sum1=sum1*10+a[i]-'0';
				
			}
		}
		for(long long int i=0;i<lenb;i++)
		{
			if(b[i]>='0'&&b[i]<='9')//´íÎó£º>='1' 
			{
				sum2=sum2*10+(b[i]-'0');
			}
		}
		printf("%lld\n",sum1*n+sum2*m);
	}
	return 0;
}
