#include<bits/stdc++.h> 
using namespace std;
const int N = 200001;
int t, n, a[N];
int main()
{
	cin >> t;
	while(t -- )
	{
		int ans = 1, sum = 1, cnt = 0, now = 0;
		cin >> n;
		for(int i = 1; i <= n; i ++ )
		{
			cin >> a[i];
		}
		int flag = 0;
		for(int i = 2; i <= n; i ++ )
		{
			if(a[i] > a[i - 1])//������ϵ���Ҫ�� 
			{
				now ++;//��һ����õĸ��ڵ�++; 
			}
			else//��������� 
			{
				cnt ++;
				if(cnt == sum)//�տ�ʼ��1 
				{
					ans ++;
					cnt = 0;
					sum = now; 
				}
			}
			cout << cnt << " " << now ;
		}
		cout << ans << endl;
	}
	return 0;
}
