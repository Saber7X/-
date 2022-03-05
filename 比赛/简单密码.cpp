#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	for(int i=0;i<a.length();i++)
	{
		if(a[i]>'E'&&a[i]<='Z')
		{
			printf("%c",a[i]-5);
		}
		/*else if(a[i]=='A')
		{
			cout<<"V";
		}
		else if(a[i]=='B')
		{
			cout<<"W";
		}
		else if(a[i]=='C')
		{
			cout<<"X";
		}
		else if(a[i]=='D')
		{
			cout<<"Y";
		}
		else if(a[i]=='E')
		{
			cout<<"Z";
		}*/
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
