#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;

int a[N], l[N], r[N], n, x, k, pos;
int ans;

int main()
{
	cin >> n >> x >> k;
	for(int i = 1; i <= n; i ++ )
	{
		cin >> a[i];
		if(a[i] == x)
		{
			pos = i;
		}
	}

	for(int i = pos - 1; i >= 1; i -- )
	{
		l[i] = l[i + 1] + (a[i] < x);
	}

	for(int i = pos + 1; i <= n; i ++ )
	{
		r[i] = r[i - 1] + (a[i] < x);
	}

	for(int i = 1; i <= pos; i ++ )//ö����߱�xС�ĸ��� 
	{
		if(l[i] >= k) continue;//��������򲻳���
		
		//���ұ��ҷ���Ҫ��ķ�Χ 
		int p1 = lower_bound(r + pos, r + 1 + n, k - l[i] - 1) - r;
		int p2 = upper_bound(r + pos, r + 1 + n, k - l[i] - 1) - r;

		ans = ans + p2 - p1;
	}
	//�����ڵ�ÿһ����������l���һ������Ҫ������� 
	cout << ans << endl;
	return 0;
}
