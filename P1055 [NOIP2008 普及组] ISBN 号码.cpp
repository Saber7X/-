#include<bits/stdc++.h> 
using namespace std;
int main()
{
	string a;
	int cnt=1,sum=0;
	cin>>a;
	for(int i=0;i<a.length()-1;i++)
	{
		if(a[i]!='-')
		{
			sum=sum+(a[i]-'0')*cnt;
			cnt++;
		}
	}
	if(sum%11==10&&a[a.length()-1]=='X')
	{
		cout<<"Right";
	}	
	else if(sum%11!=(a[a.length()-1]-'0'))
	{
		for(int i=0;i<a.length()-1;i++)
		{
			cout<<a[i];
		}
		if(sum%11==10)
		{
			cout<<"X";
		}
		else
		{
			cout<<sum%11;
		}
	}
	else
	{
		cout<<"Right";
	}
	return 0;
}
