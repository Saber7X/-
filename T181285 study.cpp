#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int a=0,b=0,c=0,d=0,e=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='s'||s[i]=='S')
		{
			a++;
		}
		if(s[i]=='t'||s[i]=='T')
		{
			b++;
		}
		if(s[i]=='u'||s[i]=='U')
		{
			c++;
		}
		if(s[i]=='d'||s[i]=='D')
		{
			d++;
		}
		if(s[i]=='y'||s[i]=='Y')
		{
			e++;
		}
	}
	cout<<min(a,min(b,min(c,min(d,e))));
	return 0;
}
