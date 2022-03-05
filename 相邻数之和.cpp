#include<stdio.h>
int main()
{
	long long int h=0,l=0,c=0,r=0;
	long long int sum=0;
	long long int t=0; 
	scanf("%lld %lld %lld %lld",&h,&l,&c,&r);
	int a[11][11]={00};
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<l;j++)
		{
			scanf("%lld",&t);
			a[i][j]=t;
		}
	}
	long long int zuoshang;
	long long int zuo;
	long long int zuoxia;
	long long int xia;
	long long int youxia;
	long long int you;
	long long int youshang;
	long long int shang;
	
	zuoshang=a[c-1][r-1];
	zuo=a[c][r-1];
	zuoxia=a[c+1][r-1];
	xia=a[c+1][r];
	youxia=a[c+1][r+1];
	you=a[c][r+1];
	youshang=a[c-1][r+1];
	shang=a[c-1][r];
	
	sum=zuoshang+zuo+zuoxia+xia+youxia+you+youshang+shang;
	if(c==0&&r==0)
	{
		sum=xia+youxia+you;
	}
	else if(c==h&&r==0)
	{
		sum=you+youshang+shang;
	}
	else if(c!=h&&c!=0&&r==0)
	{
		sum=xia+youxia+you+youshang+shang;
	}
	else if(c==0&&r==l)
	{
		sum=zuo+zuoxia+xia;
	}
	else if(c==0&&r!=0&&r!=l)
	{
		sum=zuo+zuoxia+xia+youxia+you;
	}
	else if(c==h&&r==l)
	{
		sum=zuoshang+zuo+shang;
	}
	else if(c!=h&&c!=0&&r==l)
	{
		sum=zuoshang+zuo+zuoxia+xia+shang;
	}
	else if(c==h&&r!=0&&r!=l)
	{
		sum=zuoshang+zuo+you+youshang+shang;
	}
	

	
	
	
	
	printf("%lld",sum);
	return 0;
	
 } 
