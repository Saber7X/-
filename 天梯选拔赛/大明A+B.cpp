#include<bits/stdc++.h>
using  namespace std;
int main()
{
	double a,b;int i=0;
	double sum[100];
	while(scanf("%lf %lf",&a,&b)!=EOF)
	{
		
		sum[i]=a+b;
		i++;
	}
	for(int j=0;j<i;j++)
	{
		printf("%lf",sum);
	}
}
