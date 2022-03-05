#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum=0;
		string s;
		cin>>n>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0')
			{
				sum++;
			}
		}
		if(sum==1)
		{
			cout<<"Chocola"<<endl;
		}
		else if(sum%2==0)
		{
			cout<<"Chocola"<<endl;
		}
		else
		{
			cout<<"Vanila"<<endl;
		}
	}
	return 0; 
	
}
