#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> num;
	int n,m;
	cin>>n>>m;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		num.push_back(x);
	}
	
	for(int i=0;i<m;i++)
	{
		cin>>x;
		for(int j=0;j<n;j++)
		{
			if(x>num[j]&&x<num[j+1])
			{
				num.insert(num.begin()+j+1,x);
			}
		}
	}
	for(int i=0;i<n+m;i++)
	{
		cout<<num[i]<<" ";
	}
	
	return 0;
}
