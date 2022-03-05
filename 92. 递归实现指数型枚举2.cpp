#include<bits/stdc++.h> 
using namespace std;
int n;
bool st[20];//当前数选（true）/不选 (false)

//当前选到哪个数了  
void dfs(int u)
{
	if (u > n) 
	{
		for (int i = 1; i <= n; i ++ )
		{
			if (st[i] == true)
			{
				cout << i << " ";
			}
		}
		cout << endl;
		return;
	}
	
	//选
	st[u] = true;
	dfs(u + 1);
	
	
	//不选 
	st[u] = false;
	dfs(u + 1);
	
	//(return; )
}

int main()
{
	cin >> n;
	dfs(1);
	
	return 0;
}
