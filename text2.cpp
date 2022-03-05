#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int i,j,k,m,t,s,b=1,c=1;
	double cnt=0,sum=0.0;
	string a;
	scanf("%s",&a);
	int n=strlen(a);
	if(a[0]=='-')
	{
		for(i=0;i<n;i++)
		{
			a[i]=a[i+1];
			b=1.5;
			printf("%c",a[i]);
		}
	}
	t=strlen(a);//printf("%d",t);
		for(i=0;i<t;i++)
		{
			if(a[i]=='2')
			{
				cnt++;
			}
			/*int x=(a[i]-'0')%2;
			if(i=t-2&&x==0)
			{
				c=2;
			}*/
			printf("%d",cnt);
		}
		sum=(cnt/t*b*c)/100;
		printf("%.2f",sum);
		

	return 0;
}
