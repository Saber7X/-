#include<bits/stdc++.h>
using namespace std;
struct name{
	int a;
	string b;
	
}num[100];
bool cmp(name n,name m)//�ṹ������ 
{
	return n.a>m.a ;//���涨��Ľṹ�����.Ҫ��������ı��� 
}


int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num[i].a >>num[i].b ;
	}
	sort(num,num+n,cmp);//sort���ýṹ����������� 
	for(int i=0;i<n;i++)
	{
		cout<<num[i].a <<num[i].b <<endl;
	}
	return 0;
 } 
