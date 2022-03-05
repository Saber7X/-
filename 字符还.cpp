#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	int num[100];
	int ans=0;
	int cnt=0; 
	for(int i=0;i<a.length();i++)
	{
		cout<<"1"<<endl;
		for(int j=0;j<b.length();j++)
		{
			if(a[i]==b[j])
			{
				cnt=0;
				int n=i;
				int m=j;
				while(1)
				{
					if(a[n]==b[m])
					{
						cnt++;
					}
					n++;
					m++;
					if(n==a.length())
					{
						n=0;
					}
					if(m==b.length())
					{
						m=0;
					}
					if(a[n]!=b[m])
					{
						break;
					}
				}
			}
			num[ans]=cnt;
			ans++;
		}
	}
	sort(num,num+ans);
	cout<<num[ans-1];
	return 0;
 } 
