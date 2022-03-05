#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	for(int i = 0; i <= 255; i ++ )
	{
		if((a ^ i) == b) 
		{
			cout << i;
			break;
		}
	}
	return 0;
}
