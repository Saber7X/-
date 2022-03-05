#include<bits/stdc++.h> 
using namespace std;
int main()
{
	char c[27] = {'0', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	map<char, int>cc;
	cc['A'] = 1;
	cc['B'] = 2;
	cc['C'] = 3;
	cc['D'] = 4;
	cc['E'] = 5;
	cc['F'] = 6;
	cc['G'] = 7;
	cc['H'] = 8;
	cc['I'] = 9;
	cc['J'] = 10;
	cc['K'] = 11;
	cc['L'] = 12;
	cc['M'] = 13;
	cc['N'] = 14;
	cc['O'] = 15;
	cc['P'] = 16;
	cc['Q'] = 17;
	cc['R'] = 18;
	cc['S'] = 19;
	cc['T'] = 20;
	cc['U'] = 21;
	cc['V'] = 22;
	cc['W'] = 23;
	cc['X'] = 24;
	cc['Y'] = 25;
	cc['Z'] = 26;
	
	char a; cin >> a;
	int cnt = 0;
	for (int line = cc['A']; line <= cc[a]; line ++)
	{
		for (int i = 1; i <= cnt; i ++ ) cout << " ";
		for (int i = cc[a] - cnt; i >= cc['A']; i -- ) cout << c[i];
		for (int i = cc['A']; i <= cc[a] - cnt - 1; i ++ ) cout << c[i];
		cout << endl;
		cnt ++;
	}
	return 0;
}
