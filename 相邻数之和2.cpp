 #include<stdio.h>
int main()
{
	long long int h=0,l=0,c=0,r=0;
	long long int sum=0;
	long long int t=0; 
	scanf("%d %d %d %d",&h,&l,&c,&r);
	int a[11][11]={00};
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<l;j++)
		{
			scanf("%lld",&a[i][j]);
			
		}
	}
	
	sum=a[c-1][r-1]+a[c][r-1]+a[c+1][r-1]+a[c+1][r]+a[c+1][r+1]+a[c][r+1]+a[c-1][r+1]+a[c-1][r]; 
	
	printf("%lld",sum);
	return 0;
	
 } 
