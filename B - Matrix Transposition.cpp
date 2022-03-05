#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	int ans[n + 10] = {0};
	
	int x = 0;
	int l = 0, r = n;
	for (int i = 0; i < n; i ++ )
	{
	   // cout << l << " " << r << endl;
		if (s[i] == 'L')
		{
			ans[r --] = i;
		}
		else if (s[i] == 'R')
		{
			ans[l ++ ] = i;
		}
	}
    ans[r] = n;
	for (int i = 0; i <= n; i ++ ) cout << ans[i] << " ";
	return 0;
}
/*

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	vector<int> ans;
	ans.push_back(0);
	int x = 0;
	for (int i = 1; i <= n; i ++ )
	{
		if (s[i - 1] == 'L')
		{
			ans.insert(ans.begin() + x, i);
		}
		else
		{
			x ++;
			ans.insert(ans.begin() + x, i);
		}
	}
	for (auto i : ans) cout << i << " ";
	return 0;
}
*/
