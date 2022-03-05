#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char a;
	string s;//用cout<<s输出 
	scanf("%d %c",&n,&a);
	getchar();
	getline(cin,s);
	//printf("%d\n",a);
	int i;
	if(n<=s.length())//例一：输出后四个； 
	{
		for(i=s.length()-n;i<s.length();i++)
		{
			printf("%c",s[i]); 
		}
	}
	else// if(n>a)
	{
		for(i=0;i<n-s.length();i++)
		{
			printf("%c",a); 
		}
		cout<<s;
	}
	return 0;
}
