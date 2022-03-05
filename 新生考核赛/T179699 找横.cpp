#include<map>
#include<iostream>
using namespace std;
int main()
{
	map<char,int> num;
	num['1']=1;
	num['2']=1;
	num['4']=1;
	num['5']=1;
	num['7']=1;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int sum=0;
		string a;
		cin>>a;
		for(int i=0;i<a.length();i++)
		{
			sum+=num[a[i]];
		}
		printf("%d\n",sum);
	}
	return 0;
}
