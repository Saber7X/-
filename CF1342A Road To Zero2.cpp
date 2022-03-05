#include<bits/stdc++.h>
using namespace std;
int main() 
{
	long long int t,a,b,x,y;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>a>>b;
		if(a+a<=b)
		{
			cout<<abs(x+y)*a<<endl;
		}
		else
		{
			cout<<min(x,y)*b+abs(x-y)*a<<endl;
		}
		
	}
	return 0;
}
