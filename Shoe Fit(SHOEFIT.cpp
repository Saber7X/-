#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int T;
	cin >> T;
	while(T -- )
	{
		int a, b, c;
		cin >> a >> b >> c;
		if(a + b + c == 2||  a + b + c == 1)
		{
			cout <<"1"<< endl;
		}
		else
		{
			cout <<"0"<<endl;
		}
	}
	return 0;
}
