#include<bits/stdc++.h>
#define int long long
using namespace std;

map <string, int> a;//存出现次数
map <string, int> b;//存是否出现过 0不存在，1存在
map <string, int> cc;//新增次数 
 
struct name{
	string ss;
}num[1000005];

int cnt;
signed main()
{
	int n; cin >> n;
	int x, y; char c;
	string s;
	for (int i = 1; i <= n; i ++ )
	{
		scanf("%lld", &x);
		cin >> s;
		
		if (x == 1)//新建板块 
		{
			if (b[s] == 0)//如果板块不存在 
			{
				num[cnt ++].ss = s;
				cc[s] ++; 
				a[s] = 0;//数量为0 
				b[s] = 1;//标记为出现过 
				cout << "Success" << endl;
			}
			else cout << "Duplicated" << endl;//如果已存在 
		}
		
		if (x == 2)//添加板块数量 
		{
			cin >> y;
			if (b[s] == 1)//如果板块存在 
			{
				a[s] += y;//添加数量 
				cout << "Success" << endl;
			}
			else cout << "Misread" << endl;//如果板块不存在 
		}
		if (x == 3)//删除板块 
		{
			if (b[s] == 1)//如果板块存在 
			{
				b[s] = 0;//标记为未出现过 
				a[s] = 0;//数量归零 
				cout << "Success" << endl;
			}
			else cout << "Misread" << endl;//如果板块不存在
		}
		if (x == 4)//查询板块
		{
			if (b[s] == 1)//如果板块存在 
			{
				cout << a[s] << endl;//输出数量 
			}
			else cout << "Failed" << endl;//如果板块不存在
		}
	}
	for (int i = 0; i < cnt; i ++ )
	{
		if (b[num[i].ss] == 1) 
		{
			if (cc[num[i].ss] == 1) 
			{
				cout << num[i].ss << " " << a[num[i].ss] << endl;
			}
			cc[num[i].ss] -- ;
		}
	}
	return 0;
}
