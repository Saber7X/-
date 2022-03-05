#include <bits/stdc++.h> 
using namespace std;
const int N = 15;

int start[N], end[N] = {1, 2, 3, 4, 5, 6, 7, 8, 0};

int xx[4] = {1, 0, -1, 0};//d, r, u, l 
int yy[4] = {0, 1, 0, -1};

int main()
{
	string sss ="";
	getline(cin, sss);
	int CS = 0;
	for (int i= 0; i < sss.length(); i ++ )
	{
		if (sss[i] == ' ') continue;
		else if (sss[i] == 'x') start[CS ++] = 0;
		else start[CS ++ ]= (sss[i] + '0');
	}
//	getchar();
//	 for (int i = 0; i < 9; i ++ )
//    {
//            char x; cin >> x;
//            
//            if (x == 'x')
//            {
//                    start[i] = 0;
//            }
//            else
//            {
//                    start[i] = x - '0';
//            }
//    }
//    for (int i = 0; i < 9; i ++ )
//    {
//    	cout << start[i] << " ";
//	}
	return 0;
}
