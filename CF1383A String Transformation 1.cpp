//�ò��鼯�ϲ������������ĸ��ͷ�����ͬ����ô˵���ڱ任�Ĺ����п��Ա�������ĸ 
#include<bits/stdc++.h> 
using namespace std;
const int N = 100005;
int f[30], ans, t, n;
string a, b;
int find(int x)
{
	if(f[x] == x) return x;
	return f[x] = find(f[x]);
}
void hebing(int x, int y)
{
	x = find(x); y = find(y);
	if (x != y)
	{
		ans ++;
		f[x] = y;//�ϲ� 
	}
}
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		bool flag = true; ans = 0;
		
		cin >> n;
		
		for(int i = 1; i <= 26; i ++ ) f[i] = i;
		
		cin >> a >> b;
		for(int i = 0; i < n; i ++ )
		{
			if(a[i] > b[i])
			{
				cout << "-1" << endl;
				flag = false;
				break;
			}
			hebing(a[i] - 'a' + 1, b[i] - 'a' + 1);
		}
		if (flag) cout << ans << endl;
	}
	return 0;
}
