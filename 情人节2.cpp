#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum=0;
	string a,b,c;
	while(1)
	{
		cin>>a;
		if(a==".")
		{
			break;
		}
		sum++;
		if(sum==2)
		{
			b=a;
		}
		if(sum==14)
		{
			c=a;
		}
	}
	if(sum<2)
	{
		cout<<"Momo... No one is for you ...";
	}
	else if(sum>=2&&sum<14)
	{
		cout<<b<<" is the only one for you...";
	}
	else if(sum>=14)
	{
		cout<<b<<" and "<<c<<" are inviting you to dinner...";
	}
	return 0;
}


	
