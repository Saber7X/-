#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t -- )
	{
		int p;
		cin >> p;
		
			if(p == 5) cout <<"2 4"<<endl;
			else
			{
				int ans = (p-1)/2;
				int ans1 = (p - 1)/((p-1)/2);
				if(ans1 != ans)
				{
					cout << ans << " " << ans1<<endl;
				}
			}
			
		
	}
	return 0;
}
