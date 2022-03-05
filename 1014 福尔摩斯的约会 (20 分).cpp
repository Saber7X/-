#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	
	int f = 0;
	
	for (int i = 0; i < min(a.length(), b.length()); i ++ )
	{
		///////////////////////////////////这里是到G 
		if (a[i] == b[i] && a[i] >= 'A' && b[i] <= 'G' && f == 0)
		{
			if (a[i] == 'A')  cout << "MON ";
			if (a[i] == 'B')  cout << "TUE ";
			if (a[i] == 'C')  cout << "WED ";
			if (a[i] == 'D')  cout << "THU ";
			if (a[i] == 'E')  cout << "FRI ";
			if (a[i] == 'F')  cout << "SAT ";
			if (a[i] == 'G')  cout << "SUN ";
			f ++;
			continue;
		}
		
		if (a[i] == b[i] && ( (a[i] >= '0' && a[i] <= '9') || (a[i] >= 'A' && a[i] <= 'N') ) && f == 1)
		{
			if (a[i] == '0') cout << "00:";
			if (a[i] == '1') cout << "01:";
			if (a[i] == '2') cout << "02:";
			if (a[i] == '3') cout << "03:";
			if (a[i] == '4') cout << "04:";
			if (a[i] == '5') cout << "05:";
			if (a[i] == '6') cout << "06:";
			if (a[i] == '7') cout << "07:";
			if (a[i] == '8') cout << "08:";
			if (a[i] == '9') cout << "09:";
			
			if (a[i] == 'A') cout << "10:";
			if (a[i] == 'B') cout << "11:";
			if (a[i] == 'C') cout << "12:";
			if (a[i] == 'D') cout << "13:";
			if (a[i] == 'E') cout << "14:";
			if (a[i] == 'F') cout << "15:";
			if (a[i] == 'G') cout << "16:";
			if (a[i] == 'H') cout << "17:";
			if (a[i] == 'I') cout << "18:";
			if (a[i] == 'J') cout << "19:";
			if (a[i] == 'K') cout << "20:";
			if (a[i] == 'L') cout << "21:";
			if (a[i] == 'M') cout << "22:";
			if (a[i] == 'N') cout << "23:";
			f ++;
			break;
		}
		
	}
	for (int i = 0; i < min(c.length(), d.length()); i ++ )
	{
		if (c[i] == d[i] && ( (c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z') )  )
		{
			printf("%02d", i);
			break;
		}
	}
	
	return 0;
}
