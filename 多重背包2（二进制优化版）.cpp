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
		
		cin >> a >> b >> c;//�������ֵ������ 
		
		int k = 1;//��һ��ʼ 
		
		while(k <= c)//һ��ֻ��c�� 
		{
			cnt ++;
		
			v[cnt] = k * a;//k��Ϊһ�� 
		
			w[cnt] = k * b;//k��Ϊһ�� 
		
			c -= k; //-k 
		
			k *= 2;//�������Ż������Գ˶� 
		}
		if(c > 0)//���û�����꣬ʣ���Ҳ����Ž����� 
		{
			cnt ++;
		
			v[cnt] = c * a;
		
			w[cnt] = c * b;
		}
	}
	n = cnt;//һ����cnt���� 
	
	//��ʼ01�����Ĳ��� 
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
