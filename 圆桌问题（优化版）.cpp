#include<iostream>
using namespace std;
int main()
{
	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		string a="";
		for(int i=0;i<n*2;i++)
		{
			a+='G';
		}
		int len=a.length();
		int i=0;
		int cnt=0;
		int cntn=0;
		while(1)
		{
			if(a[i]!='B')
			{
				cnt++;
			}
			if(n==0)
			{
				if(a.length()>50)
				{
					for(int i=1;i<=a.length();i++)
					{
						cout<<a[i-1];
						if(i%50==0&&i>=50)
						{
							cout<<endl;
						}
					}
					cout<<endl<<endl;
				}
				else
				{
					cout<<a<<endl;
					cout<<endl;
				}
				break; 
			}
			if(cnt==m)
			{
				a[i]='B';
				cntn++;
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
		
