#include<bits/stdc++.h>
using namespace std;
int a[10] = {0}; //甲，获胜 出的手势的次数，  
int b[10] = {0}; //乙，获胜 出的手势的次数，
int main()
{
	  
	int jiayin = 0, yiyin = 0;; 
	int n;
	cin >> n;
	for (int i = 1; i <= n; i ++ )
	{
		char x, y;
		cin >> x >> y;
		if (x == 'C' && y == 'J')
		{
			jiayin ++;
			a[2] ++;
		}
		else if (x == 'J' && y == 'C')
		{
			yiyin ++;
			b[2] ++;
		}
		else if (x == 'C' && y == 'B')
		{
			yiyin ++;
			b[1] ++;
		}
		else if (x == 'B' && y == 'C')
		{
			jiayin ++;
			a[1] ++;
		}
		else if (x == 'J' && y == 'B')
		{
			jiayin ++;
			a[3] ++;
		}
		else if (x == 'B' && y == 'J')
		{
			yiyin ++;
			b[3] ++;
		}
	}
	cout << jiayin << " " << n - jiayin - yiyin << " " << yiyin << endl;
	cout << yiyin << " " << n - jiayin - yiyin << " " << jiayin << endl;
	if (a[1] >= a[2] && a[1] >= a[3]) cout << "B ";
	else if (a[2] > a[1] && a[2] >= a[3]) cout << "C ";
	else if (a[3] > a[2] && a[3] > a[1]) cout << "J ";
	
	if (b[1] >= b[2] && b[1] >= b[3]) cout << "B";
	else if (b[2] > b[1] && b[2] >= b[3]) cout << "C";
	else if (b[3] > b[2] && b[3] > b[1]) cout << "J";
//	int minn = -1;
//	int f = 0;
//	for (int i = 1; i <= 3; i ++ )
//	{
////		cout << a[i] << " ";
//		if (a[i] > minn) 
//		{
//			minn = a[i];
//			f = i;
//		}
//	}
////	if (f == 0) cout << "  ";
//	if (f == 1) cout << "B ";
//	if (f == 2) cout << "C ";
//	if (f == 3) cout << "J ";
//	minn = -1;
//	f = 0;
//	for (int i = 1; i <= 3; i ++ )
//	{
//		if (b[i] > minn) 
//		{
//			minn = a[i];
//			f = i;
//		}
//	}
////	if (f == 0) cout << "  ";
//	if (f == 1) cout << "B";
//	if (f == 2) cout << "C";
//	if (f == 3) cout << "J";
	return 0;
}
