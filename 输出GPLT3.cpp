#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int g=0;int p=0,l=0,t=0;
	for(int i=0;i<a.length();i++)
	{
		a[i]=tolower(a[i]);
		if(a[i]=='g')
		{
			g++;
		}
		else if(a[i]=='p')
		{
			p++;
		}
		else if(a[i]=='l')
		{
			l++;
		}
		else if(a[i]=='t')
		{
			t++;
		}
	}
	while(1)
	{
		if(g>0)
		{
			printf("G");g--;
		}
		if(p>0)
		{
			printf("P");p--;
		}
		if(l>0)
		{
			printf("L");l--;
		}
		if(t>0)
		{
			printf("T");	t--;
		}
	
		if(g==0&&p==0&&l==0&&t==0)
		{
			break;
		}
	}
	return 0;
 } 
