#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int t; cin >> t;
	while (t -- )
	{
		int n; cin >> n;
		string a, b; cin >> a >> b;
		int cnt = 0;
		bool tt = false;
		for (int i = 0; i < n; i ++ )
		{
			if (a[i] == '1') cnt ++;
			if (a[i] == '0') cnt --;
			if (((a[i] != b[i] && a[i + 1] == b[i + 1]) || (a[i] == b[i] && a[i + 1] != b[i + 1])) && cnt != 0) 
			{
				tt = true;
				cout << "No" << endl;
				break;
			}
		}
		if (!tt) cout << "Yes" << endl;
	}
	return 0;
}
//https://blog.csdn.net/QWERKSDFMKD/article/details/115435343
//只要都相等时，那即使01个数不同那也无所谓
//01个数相等，一旦有一个不相同，那也能通过前面的把那个翻转过来，例如 ：01011，10100
//01个数不相等，有一个不相同的 ， 
