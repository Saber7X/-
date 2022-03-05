#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b;
	double ans;
	scanf("%lf %lf",&a,&b);
	ans=a*1.0/b*1.0;
	if(b==0) printf("Error");
	else if(b<0) printf("%.0f/(%.0f)=%.2f",a,b,ans*1.0);
	else printf("%.0f/%.0f=%.2f",a,b,ans*1.0);
	return 0;
 } 
