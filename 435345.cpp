#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string s;
	string m=" qiao ben zhong.";
	cin>>n;
	int len;
	for(int i=0;i<n;i++)
	{
		bool t=0;
		if(i==0)
		{
			getchar();
		}
		
		getline(cin,s);
		for(int i=0;i<s.length();i++)
		{
			if(s[i]==','&&t==0)
			{
				if(s[i-1]!='g'||s[i-2]!='n'||s[i-3]!='o')
				{
					t=1;
					cout<<"Skipped"<<endl;
					break;
				}
				
			}
			if(t==1)
			{
				break;
			}
			if(s[i]=='.'&&t==0)
			{
				if(s[i-1]!='g'||s[i-2]!='n'||s[i-3]!='o')
				{
					t=1;
					cout<<"Skipped"<<endl;
					break;
				}
			}
			else
			{	
				int j=i;
				len=0;
				int cnt=3;
				while(1)
				{
					if(cnt==0)
					{
						break;
					}
					if(s[j]==' ')
					{
						cnt--;
					}
					
					j--;
					len++;
				}
			}
		}
		if(t==0)
		{
			for(int i=0;i<s.length()-len-1;i++)
			{
				cout<<s[i];
			}
			cout<<m<<endl;
		}
		
	}
	return 0;
}
