#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		
		if(s[i]>='1'&&s[i]<='9')
		{
			int n=(s[i]-'0');
			//cout<<n<<endl;
			for(int j=0;j<n-1;j++)
			{
				cout<<s[i-1];
			}
		}
		else
		{
			cout<<s[i];
		}
		
	}
	return 0;
}
