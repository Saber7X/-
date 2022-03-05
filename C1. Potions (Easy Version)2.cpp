#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int n, a[2005] = {0}, f[205][205] = {0};
	cin >> n;
	for(int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	memset(f, -1, sizeof f);//都赋值成-1，防止有不存在选法的情况，大于等于0就把-1判进去了 
	for(int i = 0; i <= n; i ++ )
	{
		f[i][0] = 0;//赋值为0，为每层记录第一瓶时最大值做准备 
	}
	for(int i = 1; i <= n; i ++ )
	{
		for(int j = 1; j <= i; j ++ )
		{
			//记录的是每种选法的的最大喝药量，只要大于0就可以继续喝 
			if(f[i - 1][j - 1] >= 0)
			{
				f[i][j] = max(f[i][j], f[ i - 1][j - 1] + a[i]);
			}
			if(f[i - 1][j] >= 0)
			{
				f[i][j] = max(f[i][j], f[i - 1][j]);
			}
		}
	}
	for(int i = n; i >= 0; i -- )//从小到大枚举，用n瓶药水时 ，只要容量大于0，这种选法就是合法的 ，又因为是从小到大，所以第一个合法的就是最大的瓶数 
	{
		if(f[n][i] >= 0)
		{
			cout << i << endl;
			break; 
		}
	}
	return 0;
}
