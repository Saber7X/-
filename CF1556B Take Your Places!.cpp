#include<bits/stdc++.h> 
#define int long long
using namespace std;
signed main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; scanf("%lld", &n);
		int a[n + 10];
		int aa = 0, b = 0;
		int ji[n + 10], ou[n + 10];
		for (int i = 1; i <= n; i ++ )
		{
			scanf("%lld", &a[i]);
			if (a[i] % 2 == 0) 
			{
				ou[aa ++] = i;
			}
			if (a[i] % 2 != 0) 
			{
				ji[b ++] = i;
			}
		}
		if (abs(aa - b) > 1) 
		{
			printf("-1\n");
			continue;
		}
		
		int ans = 0x3f3f3f3f3f3f3f3f;
		int sum = 0;
		
		//n��ż��ʱ��������� 
		if (n % 2 == 0)
		{
			//������ż������ż��λ�� 
			int cnt = 2;
			sum = 0;
			for (int i = 0; i < aa; i ++ )
			{
				sum = sum + abs(cnt - ou[i]);
				cnt += 2;
			}
			ans = min (ans, sum);
			 
			//������ż����������λ�� 
			cnt = 1, sum = 0;
			for (int i = 0; i < aa; i ++ )
			{
				sum = sum + abs(cnt - ou[i]);
				cnt += 2;
			}
			ans = min (ans, sum);
			
			//��������������λ��
			 cnt = 1, sum = 0;
			for (int i = 0; i < b; i ++ )
			{
				sum = sum + abs(cnt - ji[i]);
				cnt += 2;
			}
			ans = min (ans, sum);
			
			//����������ż��λ��
			 cnt = 2, sum = 0;
			for (int i = 0; i < b; i ++ )
			{
				sum = sum + abs(cnt - ji[i]);
				cnt += 2;
			}
			ans = min (ans, sum);
		}
		else //������ʱֻ�ܰѸ�����ķ�������λ�� 
		{
			sum = 0;
			if (aa < b) //������
			{
				//��ż���ŵ�ż��λ 
				int cnt = 2, sum = 0;
				for (int i = 0; i < aa; i ++ )
				{
					sum = sum + abs(cnt - ou[i]);
					cnt += 2;
				}
				ans = min (ans, sum);
				
				//�������ŵ�����λ 
				cnt = 1, sum = 0;
				for (int i = 0; i < b; i ++ )
				{
					sum = sum + abs(cnt - ji[i]);
					cnt += 2;
				}
				ans = min (ans, sum);
			} 
			else //ż���� 
			{
				//��ż���ŵ�����λ 
				sum = 0;
				int cnt = 1;
				for (int i = 0; i < aa; i ++ )
				{
					sum = sum + abs(cnt - ou[i]);
					cnt += 2;
				}
				ans = min (ans, sum);
				
				//�������ŵ�ż��λ
				sum = 0; 
				cnt = 2;
				for (int i = 0; i < b; i ++ )
				{
					sum = sum + abs(cnt - ji[i]);
					cnt += 2;
				}
				ans = min (ans, sum);
			} 
		}
		printf("%lld\n", ans);
	}
	return 0;
}
