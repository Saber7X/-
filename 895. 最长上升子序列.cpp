#include<bits/stdc++.h>
using namespace std;
const int N = 1010;

int n;
int a[N], f[N];

int main()
{
	cin >> n;
	for(int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
	}
	for(int i = 1; i <= n; i ++ )
	{
		f[i] = 1;//�Լ�������һ�� 
		for(int j = 1; j < i; j ++ )
		{
			if(a[j] < a[i])//���f[j]������Է�f[i] ;
			{
				f[i] = max(f[j] + 1, f[i]);//�����������е������д��п����Ѿ�������ֵ������ ��ǰ����f[j]��β�������� 
			}
		}
	}
	int ans = -0x3f3f3f3f;
	for(int i = 1; i <= n; i ++ )
	{
		ans = max(f[i], ans);
	} 
	cout << ans;
	return 0;
}
