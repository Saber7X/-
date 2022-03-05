#include<bits/stdc++.h>
using namespace std;
int a[1006]={0};
int main()
{
	string n;
	cin>>n;
	int b=n.length();
	sort(n.begin(),n.end());
	for(int i=0;i<n.length();i++)
	{
		a[n[i]-'0']++;
	}
	for(int i=0;i<1006;i++)
	{
		if(a[i]!=0)
		{
			printf("%d:%d\n",i,a[i]);
		}
	}
	return 0;
}
