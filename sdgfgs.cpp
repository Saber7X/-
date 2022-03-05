#include<bits/stdc++.h> 
using namespace std;
const int N = 100005;
struct name{
	int t;
	int flag;
	int id;
	int l, r;
}num[N];
bool cmp(name a, name b)
{
	return a. t > b. t;
}
bool cmp2(name a, name b)
{
	return a. flag < b. flag;
}
int n, m;
int st[N];
int main()
{
	
	cin >> n >> m;
	for(int i = 1; i <= n; i ++ )
	{
		cin >> num[i].t;
	}
	sort(num + 1, num + 1 + n, cmp);
	int cnt = 1;
	bool ss = 1;
	for(int i = 1; i <= n; i ++ )
	{
		
		num[i].id = cnt;
		num[i].l = st[cnt];
		num[i].r = st[cnt] + num[i].t;
		st[cnt] = st[cnt] + num[i].t;
        num[i].flag = num[i].r - num[i].l;
		if(ss == 1)
		{
			cnt ++;
			if(cnt > m) 
			{
				ss = 0;
				cnt = m;
			}
		}
		else if(ss == 0)
		{
			
			if(st[cnt - 1] >= num[i + 1].t + st[cnt] && cnt != 1)
			{
				num[i + 1].id = cnt;
				num[i + 1].l = st[cnt];
				num[i + 1].r = st[cnt] + num[i + 1].t;
				st[cnt] = st[cnt] + num[i + 1].t;
		        num[i + 1].flag = num[i + 1].r - num[i + 1].l;
		        ss = 1;
		        cnt ++;
				i ++;
				continue;
			}
			
			cnt --;
			if(cnt < 1) 
			{
				ss = 1;
				cnt = 1;
			}
		}
		
	}
	sort(num + 1, num + 1 + n, cmp2);
	for(int i = 1; i <= n; i ++ )
	{
		cout << "1 " << num[i].id << " "<<num[i].l << " " << num[i].r << endl;
	}
	return 0; 
}
