#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int n;
	cin >> n;
	int ans = 0; int sum = 0;
	
	priority_queue<int, vector<int>, less<int>> res;//���ȶ��У���ʾ����Խ��Խ��ǰ
	
	for(int i = 1; i <= n; i ++ )
	{
		int x; 
		cin >> x;
		sum += x;
		ans ++;

		if(x < 0)//������С��0�ļ�Ѫҩ�Ž�ȥ 
		{
			res.push(-x);
		}
		if(sum < 0)//���Ѫ��С��0 
		{
			ans --;//���³��� 
			sum += res.top();//��֮ǰ��Ѫ����һƿҩ������Ѫ�ӻ��� 
			res.pop();//ȥ����ƿҩ 
		}
	} 
	
	cout << ans << endl;
	return 0;
}
