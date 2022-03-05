#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int n;
	while(cin >> n)
	{
		int x = 2, y=1;
	int cnt = 2;
	int s = 0;
	while(1)
	{
		if(cnt == n )
		{
			cout << x <<" " <<y<<endl;
			break;
		}
		
		
		
		if(s == 1)
		{	
			
			x ++; y --;
			if(y == 0)
			{
				y = 1;
				s = 0;
			}
			cnt ++;
		}
		else if(s == 0)
		{	
			
			x --; y ++;
			if(x == 0)
			{
				x = 1;
				s = 1;
			}
			cnt ++;
		}
		
		
		//cout<<cnt<<" : " << x <<" "<<y<<endl;
	}
	}
	
	return 0;
}
