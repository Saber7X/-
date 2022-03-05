#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	map<char,int> num;
	map<char,int> res;
	for(int i=0;i<s.length();i++)
	{
		num[s[i]]++;
	}
	//sort(num.begin(),num.end());
	int maxn=-1,minn=1001;
	
	for(int i=0;i<s.length();i++)
	{
		if(res[s[i]]==0)
		{
			maxn=max(maxn,num[s[i]]);
			minn=min(minn,num[s[i]]);
			res[s[i]]=1;
		}
	}
	cout<<maxn-minn;
	return 0;
}
