#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	int numa=0,numb=0;
	cin>>a;
	getchar();
	getline(cin,b);
	int lena=a.length();
	int lenb=b.length();
	int i;
	for(i=0;i<lena;i++)
	{
		if(a[i]>'9'||a[i]<'0')
		{
			a='?';
			c='?';
			break;
		}
	}
	for(i=0;i<lenb;i++)
	{
		if(b[i]>'9'||b[i]<'0')
		{
			b='?';
			c='?';
			break;
		}
	}
	if(a[0]!='?'&&b[0]!='?')
	{
		for(i=0;i<lena;i++)
		{
			numa=a[i]-'0'+numa;
			if(i!=lena-1)
			{
				numa*=10;
			}
		}
		for(i=0;i<lenb;i++)
		{
			numb=numb+b[i]-'0';
			if(i!=lenb-1) 
			{
				numb*=10;
			}
		}
		if(numa<1||numa>1000)
		{
			printf("?");
		}
		else
		{
			printf("%d",numa);
		}
		cout<<" + ";
		if(numb<1||numb>1000)
		{
			printf("?");
		}
		else
		{
			printf("%d",numb);
		}
		cout<<" = ";
		if(numa>=1&&numa<=1000&&numb>=1&&numb<=1000)
		{
			printf("%d",numa+numb);
		}
		else
		{
			cout<<"?";
		}
		return 0;
	}
	cout<<a<<" + "<<b<<" = "<<c;
	return 0;
}	
  
