#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int cnt=0;
	for(int i=1;i<=5;i++)
	{
		cin>>s;
		if(s[0]==s[2])
		{
			int a=s[1]-'0';
			int b=s[3]-'0';
			if(b-a==1)
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
	return 0;
}
