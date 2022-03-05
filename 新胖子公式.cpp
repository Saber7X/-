#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b;
	cin>>a>>b;
	double sum;
	 sum=a/b/b;
	
	printf("%.1f",sum);
	if(sum>25)
	{
		cout<<endl<<"PANG";
	}
	else
	{
		cout<<endl<<"Hai Xing";
	}
	return 0;
}
