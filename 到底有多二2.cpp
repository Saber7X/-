#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,k,m,t,s,b=1,c=1;
	double cnt=0,sum=1.0;
	char a[51]; 
	gets(a);
	int n=strlen(a);
	if(a[0]=='-')
	{
		for(i=0;i<n;i++)
		{
			a[i]=a[i+1];
			b=1.5;
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i]=='2')
			{
				cnt++;
			}
			if(i=n-2&&(a[i]-'0')%2==0)
			{
				c=2;
			}
		}
		sum=(cnt/n-1*b*c)/100;
		printf("%.2f%",sum);
		
	}
	else{
	
	for(i=0;i<n;i++)
	{
		if(a[i]=='2')
		{
			cnt++;
		}
		if(i=n&&a[i]%2==0)
		{
			c=2;
		}
	}
	sum=(cnt/n*b*c)/100;
	printf("%.2f%",sum);
}
	return 0;
	
 } 
