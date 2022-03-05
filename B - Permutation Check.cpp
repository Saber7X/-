#include<iostream>
using namespace std;
int main()
{
	int n;
	int num[1005]={0};
	int res[1005]={0};
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i];
		res[num[i]]++;
		if(res[num[i]]==2)
		{
			cout<<"No";
			return 0;
		}
	}
	for(int i=1;i<=n;i++)
	{
		
		if(res[i]==0)
		{
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}

