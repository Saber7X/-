#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	char b[250];
	while(getline(cin,a))
	{
		//getchar(); 
	int n=a.length();
	for(int i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	sort(b,b+n);
	printf("%s\n",&b);
	}
	return 0;
}
