#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,c;
	cin>>a>>b>>c;
	if(c%2==0)
	{
		if(abs(a)>abs(b))
		{
			cout<<">";
		}
		if(abs(a)<abs(b))
		{
			cout<<"<";
		}
		if(abs(a)==abs(b))
		{
			cout<<"=";
		}
	}
	else
	{
		if(a>b)
		{
			cout<<">";
		}
		if(a<b)
		{
			cout<<"<";
		 } 
		 if(a==b)
		 {
		 	cout<<"=";
		 }
	}
	return 0;
}
