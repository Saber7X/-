#include<bits/stdc++.h>
using namespace std;
struct name{
	string a;//���� 
	int b;//�߶� 
}num[1001];
bool cmp(name a,name b)
{
	return a.b>b.b;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i].a>>num[i].b;
	}
	sort(num,num+n,cmp);
	cout<<num[1].a;
	return 0;
}
