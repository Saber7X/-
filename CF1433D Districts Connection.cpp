#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T; cin >> T;
	while(T -- )
	{
		int n; cin >> n;
		int num[ n + 5];
		bool tt = 0;
		for(int i = 1; i <= n;i ++ )
		{
			cin >> num[i];
			if(num[i] != num[i - 1] && i!=1) tt = 1;  
		}
		if(tt == 0) 
		{
			cout << "NO"<<endl;
			continue;
		}
		int t;
		cout <<"YES"<<endl;
		for(int i = 2; i <= n; i ++ )
		{
			if(num[i] != num[1])
			{
				cout << "1 "<< i << endl;
				t = i;
			}
		}
		for(int i = 2; i <= n; i ++ )
		{
			if(num[i] == num[1])
			{
				cout << t<<" "<< i << endl;
			}
		}
	}
	return 0;
}
