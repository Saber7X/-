#include<bits/stdc++.h>
using namespace std;
struct name{
	int a;
	string b;
	
}num[100];
bool cmp(name n,name m)//结构体名字 
{
	return n.a>m.a ;//上面定义的结构体变量.要进行排序的变量 
}


int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i].a >>num[i].b ;
	}
	sort(num,num+n,cmp);//sort里用结构体数组的名字 
	for(int i=0;i<n;i++)
	{
		cout<<num[i].a <<num[i].b <<endl;
	}
	return 0;
 } 
