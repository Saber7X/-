#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[1006];char t[1006];
	int cnt=0,i,n,m=0,b,c;int s=0;
	scanf("%d",&c);
	cin>>a;
	b=strlen(a);
	for(i=0;i<b;i++)
	{
		
		if(a[i]==a[i+1])
		{
			
			cnt++;
			
		}
		if(a[i]!=a[i+1])
		{
			
			cnt=0;
			
		}
		if(cnt==c-1)
			{
				m=1;
				printf("%c",a[i]);
				break;
			
			}
	}	
	if(m==0)
	{
		printf("\"No\"");
	}
	
	return 0;
 } 
	
	
