#include<iostream> 
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	int num[105]={-1};//*为-1，o为1 
	int num1[105]={-1};//*为-1，o为1 
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='*')
		{
			num[i]=-1;
		}
		else if(a[i]=='o')
		{
			num[i]=1;
		}
		
		if(b[i]=='*')
		{
			num1[i]=-1;
		}
		else if(b[i]=='o')
		{
			num1[i]=1;
		}
	}
	int cnt=0;
	for(int i=0;i<a.length();i++)
	{
		if(num[i]!=num1[i])
		{
			num[i]*=-1;
			num[i+1]*=-1;
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
