#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num[100]={0};
	for(int i=0;i<=2;i++)
	{
		cin>>num[i];
	}
	sort(num,num+3);
	cout<<num[1]+num[2];
	return 0;
}
