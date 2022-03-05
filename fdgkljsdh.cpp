#include<bits/stdc++.h> 
#define int long long

using namespace std;

const int N = 1e5 + 10;

int n, m;
int a[N];
int ans = 0;

bool flag;
bool st[N];

//struct name{
//	int c;
//	int p[N];
//	int v[N];
//}numm[N]; 

struct name{
	int c;
	vector<int> p;
	vector<int> v;
}numm[N]; 

struct zanshi{
	int point;
	int value;
}num[N]; 

bool cmp(zanshi a, zanshi b) 
{
	return a.value < b.value; 
}

//          点     当前总饭量   路径最大值 
void dfs(int u, int sum, int maxn)
{
	//如果总饭量大于了m 
	if (sum >= m)
	{
		flag = true;//说明有情况存在 
		ans = min(ans, maxn);//找最小的答案 
		return;//因为路径上的最大值只可能更大不可能更小 
	}
	
	st[u] = true; //标记该点走过来 
	
	for (int i = 1; i <= numm[u].c; i ++ )
	{
//		if (!st[numm[u].p[i]] )//如果这个点没有走过 
//		{
			dfs(numm[u].p[i], sum + numm[u].v[i], max(maxn, numm[u].v[i]));
//		}
	}
}

signed main()
{
	cin >> n >> m;
	
	for (int i = 1; i <= n; i ++ ) scanf("%lld", &a[i]);
	
	for (int i = 1; i <= n; i ++ )//n个食堂 
	{
		scanf("%lld", &numm[i].c);//输入每个食堂有几个联通的食堂 
		
		for (int j = 1; j <= numm[i].c; j ++ )//输入每个食堂联通的食堂是哪几个 
		{
			scanf("%lld", &num[j].point);
			//cin >> num[j].point;//输入 
			num[j].value = a[num[j].point];//在暂存的每个食堂的分量赋值 
		}
		
		sort(num + 1, num + 1 + numm[i].c, cmp);//在暂存中把每个点权从小到大排序 
		
		numm[i].p.push_back(0);// 同下 
		numm[i].v.push_back(0);//从1开始所以先加一位 
		
		for (int j = 1; j <= numm[i].c; j ++ )
		{
//			numm[i].p[j] = num[j].point;
//			numm[i].v[j] = num[j].value;
			numm[i].p.push_back(num[j].point);//将排好序的数组放进最终数组 
			numm[i].v.push_back(num[j].value);//同上 
		}
	}	
	
	ans = 9999999999; //答案要找最小值 
	dfs(1, a[1], a[1]);//传入从第一个点所连接的所有点的那一层开始，因为第一个点走过了所以sum是a[1]开始， 因为要找路径上的最大值所以传入a[1] 
	
	if (flag) cout << ans << endl;
	else cout << "-1" << endl;
	
	return 0;
}
