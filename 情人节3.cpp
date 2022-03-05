#include<bits/stdc++.h>
using namespace std;
int main()
{
	int cnt=0;
	string a;
	string b;
	string x;
	while(1)
	{
		cin>>x;
		
		if(x[0]=='.')
		{
			break;
		}
		cnt++;
		//cout<<cnt<<" "<<x<<endl;
		if(cnt==2)
		{
			a=x;
		}
		if(cnt==14)
		{
			b=x;
		}
	}
	if(cnt<2)
	{
		cout<<"Momo... No one is for you ...";
	}
	if(cnt>=2&&cnt<14)
	{
		cout<<a<<" is the only one for you...";
	}
	if(cnt>=14)
	{
		cout<<a<<" and "<<b<<" are inviting you to dinner...";
	}
	return 0;
}
