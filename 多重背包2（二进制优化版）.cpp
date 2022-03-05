#include<bits/stdc++.h>
using namespace std;
const int N = 25000;
int n, V, v[N], cnt, w[N], k, f[N];
int main()
{
	cin >> n >> V;
	
	for(int i = 1; i <=n ; i ++)
	{
		int a, b, c;
		
		cin >> a >> b >> c;//体积，价值，数量 
		
		int k = 1;//从一开始 
		
		while(k <= c)//一共只有c个 
		{
			cnt ++;
		
			v[cnt] = k * a;//k个为一组 
		
			w[cnt] = k * b;//k个为一组 
		
			c -= k; //-k 
		
			k *= 2;//二进制优化，所以乘二 
		}
		if(c > 0)//如果没有用完，剩余的也打包放进数组 
		{
			cnt ++;
		
			v[cnt] = c * a;
		
			w[cnt] = c * b;
		}
	}
	n = cnt;//一共有cnt个包 
	
	//开始01背包的操作 
	for(int i = 1; i <= n; i ++)
	{
		for(int j = V; j >= v[i]; j --)
		{
			f[j] = max(f[j], f[j - v[i]] + w[i]);
		}
	}
	cout << f[V] << endl;
	
	return 0;
}
