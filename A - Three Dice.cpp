#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main() 
{
	int a,b,c;
	cin>>a>>b>>c;
	int num[100]={0};
	num[1]=6;
	num[2]=5;
	num[3]=4;
	num[4]=3;
	num[5]=2;
	num[6]=1;
	cout<<num[a]+num[b]+num[c];
	return 0;
}
