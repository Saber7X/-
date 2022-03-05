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
		else if(abs(a)==abs(b))
		{
			cout<<"=";
		}
		else if(abs(a)<abs(b))
		{
			cout<<"<";
		}
	}
	if(c%2!=0)
	{
		if(a>b)
		{
			cout<<">";
		}
		else if(a==b)
		{
			cout<<"=";
		}
		else if(a<b)
		{
			cout<<"<";
		}
	}
	//cout<<pow(a,c)<<" "<<pow(b,c)<<endl;
	//cout<<"We have pow("<<a<<","<<c<<")= "<<pow(a,b)<<" and pow("<<b<<","<<c<<")="<<pow(b,c);
	return 0;
}
