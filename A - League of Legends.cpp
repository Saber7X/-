#include<bits/stdc++.h> 
using namespace std;
#define int long long int
signed main()
{
	int suma=0,sumb=0,x;
	for(int i=1;i<=5;i++)
	{
		cin>>x;
		suma+=x;
	}
	for(int i=1;i<=5;i++)
	{
		cin>>x;
		sumb+=x;
	}
	//cout<<suma<<" "<<sumb<<endl;
	if(suma>=sumb)
	{
		cout<<"Blue";
	}
	else
	{
		cout<<"Red";
	}
	return 0;
}
