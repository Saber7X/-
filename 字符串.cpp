#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	string a;
	scanf("%d",&n);
	int cnt=0;
	getchar();
	for(int i=0;i<n;i++)
	{
		
		getline(cin,a);
		
		for(int j=0;j<a.length();j++)
		{
			
			if(a[j]=='@'&&a[j+1]=='w'&&a[j+2]=='y'&&a[j+3]=='k')
			{
				
				cnt++;
			}
		}
		
	}
	printf("%d",cnt);
	return 0;
}

