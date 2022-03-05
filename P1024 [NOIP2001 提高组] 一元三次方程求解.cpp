#include<bits/stdc++.h> 
using namespace std;
int main()
{
	double a,b,c,d;
	int cnt=0;
	cin>>a>>b>>c>>d;
	for(double i=-100.0;i<=100.0;i+=0.01)
	{
		if(fabs(a*i*i*i+b*i*i+c*i+d)-0.0<=0.001)
		{
			printf("%.2f ",i);
			cnt++;
		}
		if(cnt==3)
		{
			break;
		}
	}
	return 0;
}
