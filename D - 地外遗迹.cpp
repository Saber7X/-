#include<bits/stdc++.h>
using namespace std;
int main()
{
	string flag;
	cin>>flag;
	long long int n;
	cin>>n;
	map<char,int> num;
	for(int i=0;i<flag.length();i++)
	{
		num[flag[i]]=i;
		//cout<<flag[i]<<" : "<<num[flag[i]]<<endl;
	}
	
	for(long long int k=0;k<n;k++)
	{
		
		string a,b;
		cin>>a>>b;
		//cout<<a<<" "<<b;
		long long int lena=a.length();
		long long int lenb=b.length();
		long long int m;
		m=min(lena,lenb);
		bool t=0;
		if(a==b)
		{
			t=1;
			cout<<"red"<<endl;
		}
		else
		{
			for(long long int i=0;i<m;i++)
			{
				
				
				if(num[a[i]]<num[b[i]])
				{
					t=1;
					cout<<"green"<<endl;
					break;
				}
				if(num[a[i]]>num[b[i]])
				{
					t=1;
					cout<<"red"<<endl;
					break;
				}
			}
			if(t==0)
			{
				if(lena>lenb)
				{
					cout<<"red"<<endl;
				}
				else
				{
					cout<<"green"<<endl;
				}
			}
		}
	}
	return 0;
}
