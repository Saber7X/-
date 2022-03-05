#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string s1="";
	for(int i=s.length()-1;i>=0;i--)
	{
		if(s[i]=='6')
		{
			s1+='9';
		}
		else if(s[i]=='9')
		{
			s1+='6';
		}
		else
		{
			s1+=s[i];
		}
		
		
	}
	cout<<s1;
	return 0;
}
