//µ¹×ÅÊä³ö¼´¿É 
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,num[10005];
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>num[i];
		}
		if(n==1)
		{
			cout<<num[1]<<endl;
		}
		else
		{
			sort(num+1,num+n+1);
			for(int i=n;i>=1;i--)
			{
				cout<<num[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
