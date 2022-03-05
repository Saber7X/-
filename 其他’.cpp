#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		int i=0;
		string s="";
		int cnt=0;
		for(i=0;i<n*2;i++)
		{
			s+='G';
		}
		//cout<<s<<endl;
		int len=s.length();
		while(1)
		{
			cout<<s<<endl;
			if(s[i]!='B')
			{
				cnt++;
			}
			if(n==0)
			{
				
				if(s.length()>50)
				{
					for(int i=1;i<=s.length();i++)
					{
						cout<<s[i-1];
						if(i%50==0&&i>=50)
						{
							cout<<endl;
						}
					}
					/*for(int j=0;j<s.length();j++)
					{
						cout<<s[j];
						if(j%49==0||j>=49)
						{
							cout<<endl;
						}
					}*/
					cout<<endl<<endl;
				}
				else
				{
					cout<<s<<endl<<endl;
				}
				break;
			}
			if(cnt==m)
			{
				s[i]='B';
				n--;
				cnt=0;
			}
			i++;
			if(i==len)
			{
				i=0;
			}
		}
	}
	return 0;
}

