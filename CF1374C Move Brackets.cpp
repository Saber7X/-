#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string s;
		cin>>n>>s;
		int cnt=0;
		int a=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='(')
			{
				a++;
			}
			if(s[i]==')')
			{
				a--;
				
			}
			if(a<0)
			{
				cnt=max(cnt,abs(a));
			}
			
		}
		cout<<cnt<<endl;
	}
	return 0;
}
