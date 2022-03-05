#include<bits/stdc++.h>
using namespace std;
string a="chi1 huo3 guo1";
int lena=a.length();
int findhuoguo(string n)
{
	int cnt=0;
	int lenn=n.length();
	for(int i=0;i<lenn;i++)
	{
		if(n[i]!=a[0])
		{
			continue;
		}
		else
		{
			int x=0;
			while(1)
			{
				if(n[i]==a[x])
				{
					i++;
					x++;
				}
				if(x==lena)
				{
					cnt++;
					i-=1;
					//i+=lena-1;
					break;
				}
				if(n[i]!=a[x])
				{
					i-=1;
					break;
				}
			}
		}
	}
	//cout<<endl;
	return cnt;
}	
		
	

int main()
{
	string x;
	int cnt=0;//总条数
	int first;//第一条
	int cnting=0;//共有几条吃火锅 
	
	bool t=0;
	while(1)
	{
		getline(cin,x);
		if(x==".")
		{
			break;
		}
		cnt++;
		cnting+=findhuoguo(x);
		if(t==0&&findhuoguo(x)!=0)
		{
			first=cnt;
			t=1;
		}
		
	}
	if(t==1)
	{
		cout<<cnt<<endl<<first<<" "<<cnting; 
	}
	else
	{
		cout<<cnt<<endl<<"-_-#";
	}
	
	
	return 0;
}
