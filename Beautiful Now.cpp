//#include<bits/stdc++.h> 
//using namespace std;
//string s;
//int k;
//
//string maxn, minn;
//string a, b;
//
//void bfs()
//{
//	int aa = 0, bb = 0;
//	unordered_map<string, int> f;
//	queue <string> q;
//	q.push(s);
//	string t;
//	f[t] = 0;
//	while (!q.empty() && f[t] <= k + 1)
//	{
//		t = q.front();
//		maxn = max(maxn, t);
//		minn = min(minn, t);
//		if (a == maxn ) aa = 1;
//		if (t == minn ) bb = 1;
//		if (aa == 1 && bb == 1) break;
//		
//		q.pop();
//		
//		for (int i = 0; i < s.length(); i ++ )
//		{
//			for (int j = i  + 1; j < s.length(); j ++ )
//			{
//				string neww = t;
//				if(neww[i] < neww[j]) 
//				{                       
//				if (!f.count(neww))
//					if (!f.count(neww))
//					{
//						f[neww] = f[t] + 1;
//						q.push(neww);
//					}
//				}
//				
//				
//			}
//		}
//	}
//	
//}
//
//int main()
//{
//	int t; 
//	cin >> t;
//	while (t -- )
//	{
//		cin >> s >> k;
//		maxn = s;
//		minn = s;
//		a = s;
//		b = s;
//		sort(a.begin(), a.end());
//		b = a;
//		reverse(b.begin(), b.end());
//		bfs();
//		
//		cout << minn <<" "<< maxn<< endl;
//	}
//	return 0;
//}

#include<bits/stdc++.h>
using namespace std;

string n;
int k;

string bfs_max()
{
	string ans = n;
	queue<string> q;
	q.push(n);
	string t = n;
	unordered_map<string, int> f;
	f[t] = 0;
	
	while (!q.empty())
	{
		t = q.front();
		q.pop();
		
		//至关重要的一步，之前就是因为把这个判断写在了while的括号里导致错了，我** 
		if (f[t] > k) break;
		
		ans = max(ans, t);
		for (int i = 0; i < t.length(); i ++ )
		{
			for (int j = i + 1; j < t.length(); j ++ )
			{
				string neww = t;
				if (neww[i] < neww[j])
				{
					swap(neww[i], neww[j]);
					if(!f.count(neww))
					{
						f[neww] = f[t] + 1;
						if (neww[0] != '0') q.push({neww});
					}
					
				}
			}
		}
	}
	return ans ;
}

string bfs_min()
{
	string ans = n;
	queue<string> q;
	q.push(n);
	string t = n;
	unordered_map<string, int> f;
	f[t] = 0;
	
	while (!q.empty())
	{
		t = q.front();
		q.pop();
		
		//至关重要的一步，之前就是因为把这个判断写在了while的括号里导致错了，我** 
		if (f[t] > k) break;
		
		ans = min(ans, t);
		for (int i = 0; i < t.length(); i ++ )
		{
			for (int j = i + 1; j < t.length(); j ++ )
			{
				string neww = t;
				if (neww[i] > neww[j])
				{
					swap(neww[i], neww[j]);
					if(!f.count(neww))
					{
						f[neww] = f[t] + 1;
						if (neww[0] != '0') q.push({neww});
					}
					
				}
			}
		}
	}
	return ans ;
}
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		cin >> n >> k;
		cout << bfs_min() <<" " <<  bfs_max() << endl;
	}
	return 0;
}
