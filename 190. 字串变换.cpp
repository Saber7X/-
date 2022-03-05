#include<bits/stdc++.h>
using namespace std;
const int N = 10;
int n;
unordered_map<string, int> da;
unordered_map<string, int> db;
string a[N], b[N];


//扩展╰（‵□′）╯
int extend(queue<string>& q, unordered_map<string, int>& da, unordered_map<string, int>& db, string a[N], string b[N])
{
	int d =  da[q.front()];
	while (!q.empty() && da[q.front()] == d)
	{
		string state = q.front();
		q.pop();
		for (int i = 0; i < state.length(); i ++ )
		{
			for (int j = 0; j < n; j ++ )
			{
				if (state.substr(i, a[j].length()) == a[j]) //找到了相同部分
				{
					string neww = state.substr(0, i) + b[j] + state.substr(i + a[j].length(), 100);//转换后的
					if (db.count(neww)) return d + 1 + db[neww];
					if (da.count(neww)) continue;
					da[neww] = d + 1;
				} 
			}
		}
	}
	return 11;
}

int bfs(string A, string B)
{
	unordered_map<string, int> da;
	unordered_map<string, int> db;
	queue<string> qa, qb;
	qa.push(A);
	qb.push(B);
	int r;
	while (!qa.empty() && !qb.empty())
	{
		int temp;
		if (qa.size() <= qb.size()) //A小就扩展A 
		{
			temp = extend(qa, da, db, a, b);
			
		}
		else //反向扩展 
		{
			temp = extend(qb, db, da, b, a);
		}
		if(temp <= 10) return temp;
		if (++r >= 10) return -1;
	}
	return -1;
}

int main()
{
	string A, B; cin >> A >> B; 
	while (cin >> a[n] >> b[n]) n ++;
	int temp = bfs(A, B);
	if (temp == -1) cout << "NO ANSWER!" << endl;
	else cout << temp << endl;
	return 0;
}
