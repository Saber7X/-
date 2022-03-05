#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	vector<int> v;
	cin>>n>>m;
	for(int i=0;i<n+m;i++)
	{
		int x;
		cin>>x;
		 v.push_back(x);
		
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n+m;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;
}
