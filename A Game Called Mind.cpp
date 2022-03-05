#include<bits/stdc++.h>
using namespace std;
struct name{
	char id;
	int cc;
}num[10];
bool cmp(name a, name b)
{
	return a.cc < b.cc;
}
int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	char ii[70] = {'0', 'A', 'B', 'C', 'D', 'E', 'F', 'G','H'};
	for(int k = 1; k <= n; k ++ )
	{
		int m ;
		cin >> m;
		for(int i = 1; i <= m; i ++ )
		{
			int x;
			cin >> x;
			num[cnt].id = ii[k];
			num[cnt].cc = x;
			cnt ++;
		}
	}
	sort(num, num + cnt , cmp);
	for(int i = 0; i < cnt; i ++ )
	{
		cout << num[i].id ;
	}
	return 0;
}
