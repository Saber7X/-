#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	map<char,int > num;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		num[s[i]]++;
	}
	char ans;
	int maxn=-1;
	for(int i='a';i<='z';i++)
	{
		if(num[i]>maxn)
		{
			maxn=num[i];
			ans=i;
		}
	}
	cout<<ans<<endl<<maxn;
	return 0;
}
