#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << "18395";
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

int n, m;
bool b[50];
int a[100];
unordered_map<string, int> ma;
int cnt = 0;
void dfs(int x, int s) 
{
    if (x == 0) 
	{
		int ans[20];
		int c = 1;
        for (int i = 1; i <= n; i++)
        {
        	if (b[i])
            {
//            	cout << a[i] << " ";
            	ans[c ++ ] = a[i];
			}
		}
        sort(ans + 1, ans + 1 + m);
//        for (int i = 1; i <= m; i ++ ) cout << ans[i] <<  " ";
		string s = "";
        for (int i = 1; i <= m; i ++ )
        {
        	int x = ans[i];
        	s += to_string(x);
		}
		if (ma[s] == 0)
		{
			ma[s] = 1;
			cnt ++;
			cout << s << endl;
		}
        return;
    }
    for (int i = s; i <= n; i++)
        if (!b[i]) 
		{
            b[i] = true;
            dfs(x - 1, i + 1);
            b[i] = false;
        }
}

int main() {
	for (int i = 1; i <= 4; i ++ )
	{
		for (int j = 1; j <= 13; j ++ )
		{
			a[++n] = j;
		} 
	}
	m = 6;
//    cin >> n >> m;
    dfs(m, 1);
    cout << "ans == :" << cnt << endl;
    return 0;
}

*/
