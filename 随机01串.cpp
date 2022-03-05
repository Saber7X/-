#include <bits/stdc++.h>
using namespace std;

string bitstring(int length)
{
	bitset<32> b(rand());
	string s(b.to_string().substr(0, length%32));
	for(int i=0; i<length/32-1; i++) 	
	{
		b = rand();
		s += (b.to_string());
	}
	return(s);
}

struct name
{
	string aa;
	
}num[10005];
int main() 
{
	int cnt = 0;
	std::string s;
	int max_length = 41;
	for(int i=0; i<2000; i++) 
	{
		bool ss = true;
		s = bitstring(rand() % max_length);
		if(i%2 == 0)
		{
			s += '1';
		}
		else
		{
			s+='0';
		}
		for(int j = s.length()-2; j >=0;j--)
		{
			if(s[j] == '1')
			{
				ss = false;
			}
			s += s[j];
 		} 
		if(!ss)
		{
			num[cnt++].aa=s;
		}
	}
	cout << cnt-1 <<endl;
	for(int i = 0; i < cnt; i ++)
	{
	
		cout << num[i].aa.length()<<endl;
		cout <<num[i].aa <<endl;
	}
}
