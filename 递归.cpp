#include<bits/stdc++.h> 
using namespace std;
int num[5] = {0, 1, 2} ;
int add (int n)
{
	int flag = 1;
	for (int i = n; i < 5; i ++ )
	{
		 flag + add();
	}
	return flag;
}
int main()
{
	cout << add(0) << endl;
	return 0;
}
