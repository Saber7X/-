#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	while(getline(cin,a))
	{
		int len=a.length();
	for(int i=0;i<len;i++)
	{
		if(a[i]!=' ')
		{
			printf("%c\n",a[i]);
		}
	}
	}
	
	
	return 0;
}
