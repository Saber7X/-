#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	int res[101];//要用int 数组 
	int res1[101];
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='o')
		{
			res[i]=1;
		}
		if(a[i]=='*')
		{
			res[i]=-1;
		}
		if(b[i]=='o')
		{
			res1[i]=1;
		}
		if(b[i]=='*')
		{
			res1[i]=-1;
		}
	}
	int cnt=0;
	for(int i=0;i<a.length()-1;i++)
	{
		if(res1[i]!=res[i])
		{
			cnt++;
			res[i]=-res[i];
			res[i+1]=-res[i+1];
		}
	}
	cout<<cnt;
	return 0;
 } 
 /*
 思路：从左翻到右，一个不一样就翻这个和下一个，不用考虑其他，每翻一次计数即可
 */ 
