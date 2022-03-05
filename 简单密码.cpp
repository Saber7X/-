#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	getline(cin,a);
	for(int i=0;i<a.length();i++)
	{
		if(a[i]>='F'&&a[i]<='Z')
		{
			
			printf("%c",a[i]-5);
		}
		else if(a[i]>='A'&&a[i]<='E')
		{
			printf("%c",a[i]-5+26);
		}
		else
		{
			cout<<a[i];
		}
		
	}
	return 0;
}
