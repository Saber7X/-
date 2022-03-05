#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
	int n,m;
	string a;
	string b="qiandao";//7
	string c="easy";//4
	cin>>n>>m;
	int g=m;
	int v=0;
	string y;
	string z;
	getchar();
	int cnt=0;
	bool s=0;
	string x;
	for(int k=0;k<n;k++)
	{
		bool t=0;
		getline(cin,a);
		
		for(int i=0;i<a.length();i++)
		{//if(((a[i]=='q'||a[i]=='Q')&&(a[i+1]=='i'||a[i+1]=='I')&&(a[i+2]=='a'||a[i+2]=='A')&&(a[i+3]=='n'||a[i+3]=='N')&&(a[i+4]=='d'||a[i+4]=='D')&&(a[i+5]=='a'||a[i+5]=='A')&&(a[i+6]=='o'||a[i+6]=='O'))||(a[i]=='e'&&a[i+1]=='a'&&a[i+2]=='s'&&a[i+3]=='y'))

			if((a[i]=='q'&&a[i+1]=='i'&&a[i+2]=='a'&&(a[i+3]=='n'&&a[i+4]=='d'&&a[i+5]=='a'&&a[i+6]=='o')||(a[i]=='e'&&a[i+1]=='a'&&a[i+2]=='s'&&a[i+3]=='y')))
			{
				t=1;
				break;
			}
			
		}
		if(t==0)//难题数量 
		{
			cnt++;
			z=a;
		}
		if(cnt>m&&s==0)
		{
			y=z;
			s=1;
		}
	
	}
	if(cnt<=g)
	{
		cout<<"Wo AK le";
	}
	else if(s==1)
	{
		cout<<y;
	}
	//cout<<cnt;
	return 0;
}
