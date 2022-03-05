#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i;
	
	cin >> i;i --;
	while (i ++)
	{
		int x = i;
		int xx = i;
		int cnt = 0;
		int sum = 0;
		
		while (xx > 0)
		{
			cnt ++;
			xx /= 10;
		}
		while (x > 0)
		{
			int y = x % 10;
			sum += pow(y, cnt);
			x /= 10;
		}
		
		 if (sum == i) 
		 {
		 	cout << i << endl;
		 	break;
		 }
	}
	return 0;
}
