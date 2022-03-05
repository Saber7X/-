#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a="123";
	getline(cin,a);
	int cnt=0;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]!='6')
		{
			cout<<a[i];
		}
		if(a[i]=='6')
		{
			cnt++;
			if(a[i+1]=='6')
			{
				continue;
			}
			else
			{
				if(cnt<=3)
				{
					for(int j=0;j<cnt;j++)
					{
						cout<<'6';
						
					}
					cnt=0;
				}
				else if(cnt>3&&cnt<=9)
				{
					cout<<'9';
					cnt=0;
				}
				else if(cnt>9)
				{
					cout<<"27";
					cnt=0;
				}
			}
		}
	}
	return 0;
}
