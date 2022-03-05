#include<bits/stdc++.h>
using namespace std;
int book[256];
int main()
{
	string a,b; 
	getline(cin,a);//读入一整行 
	getline(cin,b);
	
	//int n=strlen(a);
	//int m=strlen(b);
	//char c[10000];
	int i,j,k;
	int t=0;
	for(i=0;i<b.length();i++)
	{
		book[b[i]]=1;
	}
	for(i=0;i<a.length();i++)
	{
		if(book[i]==1)
		{
			continue;
		}
		printf("%c",a[i]);
		
	}
	
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i]!=b[j])
			{
				c[t]=a[i];
				t++;
				break;
			}
		}
	}*/
	
	return 0;
} 
