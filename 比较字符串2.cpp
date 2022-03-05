#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string a,b;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		int lena=a.length();
		int lenb=b.length();
		if(lena==lenb)
		{
			cout<<a<<" is equal long to "<<b<<"\n";
		}
		else if(lena>lenb)
		{
			cout<<a<<" is longer than "<<b<<"\n";
		}
		else
		{
			cout<<a<<" is shorter than "<<b<<"\n";
		}
	}
	return 0;
}
