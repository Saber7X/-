#include<bits/stdc++.h>
using namespace  std;
int n;
int dfs(int u)
{
	if(u<=2)
	{
		return 1;
	}
	return dfs(u-1)+dfs(u-2);
}

int main()
{
	
	
	scanf("%d",&n);
	cout<<dfs(n+1);//��Ϊ��0��Ҳ��һ��̨�ף�������n+1�� 
	return 0;
}
