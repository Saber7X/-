#include<bits/stdc++.h>
using namespace std;
int n;
int dfs(int u)
{
	if(u<=2)
	{
		return 1;
	}
	
	return dfs(u-1)+dfs(u-2);//��Ϊ����ǰ�������������dfs(u-1)+dfs(u-2) 
}
//�÷������������л������ҷ��������� 

int main()
{
	cin>>n;
	cout<<dfs(n);
	return 0;
 } 
