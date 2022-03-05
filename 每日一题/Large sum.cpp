#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,a;
	cin>>s;
	cin>>a;
	long long int sum=0;
	for(int i=0;i<s.length();i++)
	{
		sum+=s[i]-'0';
	}
	for(int i=0;i<a.length();i++)
	{
		sum+=a[i]-'0';
	}
	cout<<sum;
	return 0;
}
