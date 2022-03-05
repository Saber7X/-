#include<bits/stdc++.h>
using namespace std;
int flag[23] = {2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608};

int main()
{
	int n; cin >> n;
	if (n % 2 != 0) cout << -1 << endl;
	else
	{
		vector<int> ans;
		for (int i = 22; i >= 0; i -- )
		{
			if (n >= flag[i])
			{
				ans.push_back(i);
//				cout << flag[i] << " ";
				n -= flag[i];
			}
		}
		if (n != 0) cout << -1;
		else for (auto i : ans) cout << flag[i] << " ";
	}
	
	return 0;
}


