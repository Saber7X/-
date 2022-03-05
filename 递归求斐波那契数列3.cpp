#include<bits/stdc++.h>
using namespace std;
int n;
int dfs(int u)
{
	if(u<=2)
	{
		return 1;
	}
	
	return dfs(u-1)+dfs(u-2);//因为等于前两项相加所以用dfs(u-1)+dfs(u-2) 
}
//该方法可用于所有基础的找方案数问题 

int main()
{
	cin>>n;
	cout<<dfs(n);
	return 0;
 } 
