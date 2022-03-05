#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	while(getline(cin,a))
	{
		if(a[0]>='a'&&a[0]<='z')
		{
					a[0]-=32;
		}
		for(int i=0;i<a.length();i++)
		{
			if(a[i]=='\n'||a[i]==' '||a[i]=='\t'||a[i]=='\r')
			{
				if(a[i+1]>='a'&&a[i+1]<='z')
				{
					a[i+1]-=32;
				}
				
				
			}
			printf("%c",a[i]);
		}
		printf("\n");
	}
	return 0;
}
