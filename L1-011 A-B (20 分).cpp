#include<bits/stdc++.h>
int namespace std;
signed main() 
{
	string a;
	string b;
	getline(cin,a);
	getline(cin,b);
	int la=a.length();
	int lb=b.length();
	int i,j;
	
	for(i=0;i<la;i++)//������һ���ַ��� 
	{
		bool s = 0;
		for(j=0;j<lb;j++)//�����ڶ����ַ���
		{
			if(a[i]==b[j])
			{
				s = 1;
				break;
			}
		}
		if(s == 0)
		{
			cout<<a[i];
		}
	}
	return 0;
}
