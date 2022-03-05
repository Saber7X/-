#include<map>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[5005],c,d;
	int x='A',y='Z',xx='A',yy='Z',i,j;
	scanf("%s",&a);
	map<char,char> num;
	for(i=x,j=yy;i<=y,j>=xx;i++,j--)
	{
		c=i;
		d=j;
		num[c]=d;
	}
	for(i=0;i<strlen(a);i++)
	{
		printf("%c",num[a[i]]);
	}
	return 0;
}
