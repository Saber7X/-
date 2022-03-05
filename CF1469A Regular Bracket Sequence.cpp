//只要保证总长度是偶数，且首尾合法，就一定可以，因为给的字符串里只会出现一个（和），其余一定都是问号 
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(s.length()%2==0&&s[0]!=')'&&s[s.length()-1]!='(')
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
