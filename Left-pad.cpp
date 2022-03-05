#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char c;
	scanf("%d %c",&n,&c);
	string s;
	getchar();
	getline(cin,s);
	
	int cnt=0;
	if(s.length()==n)
	{
		for(int i=0;i<s.length();i++)
		{
			cout<<s[i];
		}
	}
	else if(s.length()<n)
	{
		for(int i=1;i<=n-s.length();i++)
		{
			cout<<c;
		}
		for(int i=0;i<s.length();i++)
		{
			cout<<s[i];
		}
	}
	else if(s.length()>n)
	{
		for(int i=s.length()-n;i<s.length();i++)
		{
			cout<<s[i];
		}
	}
	return 0;
}
