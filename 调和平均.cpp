#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x;
	double sum=0.0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		x=1/x;
		sum+=x;
	}
	printf("%.2lf",1/(sum/n));
	return 0;
}
