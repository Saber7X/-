#include<bits/stdc++.h>
using namespace std;

const int N = 10005;

vector<int> g[N], ans;
int d[N];
int n = 5;
bool topsort()
{
	queue<int> q;
    for (int i = 1; i <= n; i ++ )
    {
        if (d[i] == 0)
        {
            q.push(i);
            ans.push_back(i);
        }
    }
    while (!q.empty())
    {
        int t = q.front();
        q.pop();
        
        for (int i = 0; i < g[t].size(); i ++ ) 
        {
            int j = g[t][i];
            d[j] --;
            if (d[j] == 0)
            {
                q.push(j);
                ans.push_back(j);
            }
        }
    }
    return ans.size() == n;
}
int main()
{
	map<char, int> f;
	f['A'] = 1;
	f['B'] = 2;
	f['C'] = 3;
	f['D'] = 4;
	f['E'] = 5;
	map<int, char> ff;
	ff[1] = 'A';
	ff[2] = 'B';
	ff[3] = 'C';
	ff[4] = 'D';
	ff[5] = 'E';
	
	string s;
	for (int i = 1; i <= 5; i ++ )
	{
		cin >> s;
		if (s[1] == '<')
		{
			g[f[s[0]]].push_back(f[s[2]]);
			d[f[s[2]]] ++;
		}
		else
		{
			g[f[s[2]]].push_back(f[s[0]]);
			d[f[s[0]]] ++;
		}
	}
	bool ss = topsort();
	if (ss) for (int i : ans) cout << ff[i];
	else cout << "impossible";
	cout << endl;
	return 0;
}
