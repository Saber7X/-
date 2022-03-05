#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n;
	double cnt1=0,cnt2=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		double x;
		cin>>x;
		if(x>=60.0)
		{
			cnt1+=1.0;
		}
		if(x>=85.0)
		{
			cnt2+=1.0;
		}
	}
	printf("%.0f%\n%.0f%",cnt1/n*100.0,cnt2/n*100.0);
	return 0;
}
