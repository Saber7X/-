#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int lena=a.length();
	if(lena==4)
	{
		if((a[0]-'0')*10+(a[1]-'0')>21)
		{
			printf("19%d-%c%c",(a[0]-'0')*10+(a[1]-'0'),a[2],a[3]);
		}
		if((a[0]-'0')*10+(a[1]-'0')<=21)
		{
			printf("20%02d-%c%c",(a[0]-'0')*10+(a[1]-'0'),a[2],a[3]);
		}		
	
	}
	if(lena==6)
	{
		printf("%c%c%c%c-%c%c",a[0],a[1],a[2],a[3],a[4],a[5]);
	}
	return 0;
}
