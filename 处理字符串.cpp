#include<bits/stdc++.h> 
using namespace std;
int main()
{
	char a[100];
	gets(a);
	int b=strlen(a);
	for(int i=0;i<b;i++)
	{
		for(int j=1;j<=9;j++)
		{
			
			if(a[i]==j&&a[i+1]!=j)
			{
				printf("\n");
			}
			
			
	 } 
	return 0;
}

