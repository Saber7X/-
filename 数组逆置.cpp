#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	while(getline(cin,a))
	{
		int len=a.length();
		for(int i=len-1;i>=0;i--)
		{
			printf("%c",a[i]);
		}
		printf("\n");
	}
	return 0;
}
