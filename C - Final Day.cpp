#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
struct name
{
	int pp;//总分 
	int flag;//出现顺序 
	string ans;//结果 
}num[N];
bool cmp(name a, name b)
{
	return a.pp > b.pp;
}
bool cmp1(name a, name b)
{
	return a.flag < b.flag;
}
int main()
{
	int n, k; cin >> n >> k;
	for (int i = 1; i <= n; i ++ )
	{
		int sum = 0;
		for (int j = 1; j <= 3; j ++ )
		{
			int x;
			scanf("%d", &x);  
			sum += x;
		}
		num[i].pp = sum;
		num[i].flag = i;
	}
	sort (num + 1, num + 1 + n, cmp);//从大到小排名 
	
	int f = num[k].pp;//第k名的分数
	 
	for (int i = 1; i <= n; i ++ )
	{
		if (i <= k) num[i].ans = "Yes";
		if (i < k) //需要降低名次 
		{
			if (f + 300 >= num[i].pp) num[i].ans = "Yes";
			else num[i].ans = "No";
		}
		if (i > k) //需要升名次 
		{
			if (num[i].pp + 300 >= f) num[i].ans = "Yes";
			else num[i].ans = "No";
		}
	}
	sort (num + 1, num + 1 + n, cmp1);
	for (int i = 1; i <= n; i ++ )	
	{
		cout << num[i].ans << endl;
	 } 
	return 0;
}
