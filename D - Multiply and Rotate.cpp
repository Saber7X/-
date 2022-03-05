#include<bits/stdc++.h> 
#define int long long
using namespace std;
int n, m;

struct node
{
	int a;
	string s;
	int cnt;
};

bool st[10000050];

int stringtoint(string s)
{
	int sum = 0;
	
	for (int i = 0; i < s.length(); i ++ )
	{
		sum *= 10;
		sum += (s[i] - '0');
	}
	return sum;
}

int iff  = 0; 

void bfs()
{
	queue<node> q;
	q.push({1, "1", 0});
	
	while (!q.empty())
	{
		auto t = q.front();
		q.pop();
//		cout << t.a << "  :  " << t.cnt << endl;
		
		if (t.a == m)
		{
			iff = 1;
			cout << t.cnt << endl;
			break;
		}
		
		int ne = t.a * n;
		string ss = to_string(ne);
		
		if (!st[ne] && ne <= 100005)
		{
			st[ne] = 1;
			
			q.push({ne, ss, t.cnt + 1});
		
		}
		
		if (t.a >= 10)
		{
			string ss1 = t.s;
			string ss2 =  "";
			if (ss1[ss1.length() - 1] != '0')
			{
				 ss2 += ss1[ss1.length() - 1];
			}
			ss2 += ss1;
			ss2.pop_back();
			
//			next_permutation(ss1.begin(), ss1.end());
			int num = stringtoint(ss2);
			
			if (!st[num] && num <= 100005)
			{
				st[num] = 1;
				
				q.push({num, ss2, t.cnt + 1});
			}
		}
	}
}

signed main()
{
	cin >> n >> m;
	
 	bfs();
 	
 	if (!iff) cout << -1 << endl;
	return 0;
}
