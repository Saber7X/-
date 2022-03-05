#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int num[100]={0};
	num[1]=1;
	num[2]=1;
	num[4]=1;
	num[5]=1;
	num[7]=1;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		int cnt=0;
		for(int i=0;i<s.length();i++)
		{
			int m=(s[i]-'0');
			cnt+=num[m];
		}
		cout<<cnt<<endl;
	}
	return 0;
}
