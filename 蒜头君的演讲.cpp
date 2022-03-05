#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int t=0;
	int len=a.length();
	for(int i=0;i<len;i+=2)
	{
		//cout<<a[i];
		if(a[i]!=a[i+1])
		{
			t=1;
		}
	}
	if(t==0)
	{
		printf("yoshi");
	}
	else
	{
		for(int i=0;i<len;i+=2)
		{
			cout<<a[i];
			if(a[i]!=a[i+1])
			{
				t=1;
				cout<<a[i];
				i=i-1;
			}
			else
			{
				cout<<a[i+1];
			}
		}
	}
	return 0;
}
