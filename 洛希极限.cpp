#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d;
	int n;//¸ÕÌå¡¢/Á÷Ìå
	cin>>a>>n>>b;
	if(n==0)
	{
		a*=2.455;
		if(a>b)
		{
			printf("%.2lf T_T",a);
		}
		else
		{
			printf("%.2lf ^_^",a);
		}
	 }
	else if(n==1)
	{
		a*=1.26;
		if(a>b)
		{
			printf("%.2lf T_T",a);
		}
		if(a<b)
		{
			printf("%.2lf ^_^",a);
		}
	 }
	return 0;
}
