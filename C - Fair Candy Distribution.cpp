#include<bits/stdc++.h> 
#define int long long
using namespace std;
const int N = 200005;

struct name{
	int id;//编号 
	int sum;//毛衣数 
	int flag;//出现次序 
	
}num[N];

bool cmp(name a, name b) //编号从小到大排 
{
	return a.id < b.id; 
}

bool cmp1(name a, name b) //出现次序排序
{
	return a.flag <  b.flag;
} 

signed main()
{
	int n, k;//n个人,k件毛衣 
	
	cin >> n >> k;
	
	for(int i = 0; i < n; i ++ )
	{
		cin >> num[i].id;
		
		num[i].sum += (k / n);
		
		num[i].flag = i;//记录出现次序 
	}
	
	int cnt = k % n;
	
	sort(num, num + n, cmp); //按编号排序 
	
	
	while(cnt --)
	{
		num[cnt].sum ++;
	}
	
	sort(num, num + n, cmp1); //按出现次序排序 
	
	for(int i = 0; i < n; i ++)
	{
		cout << num[i].sum << endl;
	}
	
	return 0;
}
