#include<iostream> 
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
	int num[3]={0};
	for(int i=0;i<3;i++)
	{
		cin>>num[i];
	}
	sort(num,num+3);
	if((num[1]-num[0])==(num[2]-num[1]))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
