#include<bits/stdc++.h>
#define inf 1000000001
using namespace std;

int main()
{
	string a;
	cin>>a;
	char ans[100];
	int b=0;
	int cnt=0;
	bool t=0;
	int len=a.length();
	if(a[0]=='-')
		{
			ans[cnt]='-';
			cnt++;
			b++;
		}
	for(long long int i=a.length()-1;i>=b;i--)
	{
		
		if(a[i]=='0'&&t==0)
		{
			continue;
		}
		else if(a[i]!='0'&&t==0)
		{
			ans[cnt]=a[i];
			cnt++;
			t=1;
		}
		else if(t==1)
		{
			ans[cnt]=a[i];
			cnt++;
		}
	}
	for(long long int i=0;i<cnt;i++)
	{
		cout<<ans[i];
	}
	return 0;
}
