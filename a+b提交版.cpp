#include<bits/stdc++.h>
using namespace std;
struct bign
{
	int d[1000];
	int len;
	bign()
	{
		memset(d,0,sizeof(d));
		len=0;
	}
};
bign change(char str[])
{
	bign a;
	a.len=strlen(str);
	for(int i=0;i<a.len;i++)
	{
		a.d[i]=str[a.len-1-i]-'0';
	 } 
	 return a;
}
bign add(bign a,bign b)
{
	bign c;
	int carry=0; 
	for(int i=0;i<a.len||i<b.len;i++)
	{
		int temp=a.d[i]+b.d[i]+carry;
		c.d[c.len++]=temp%10;
		carry=temp/10; 
	 }
	if(carry!=0)
	{
		c.d[c.len++]=carry;
	} 
	return c;
 } 
void print(bign a)
{
	for(int i=a.len-1;i>=0;i--)
	{
		int cnt=0;
		printf("%d",a.d[i]);
	 }
	 printf("\n");
 } 
int main()
{
	char str1[1000],str2[1000];
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)		
	{
		scanf("%s%s",str1,str2);
		bign a=change(str1);
		bign b=change(str2);
		printf("Case %d:\n",i);
		printf("%s + %s = ",str1,str2);
		print(add(a,b)) ;
		if(i!=n)
		{
			printf("\n");
		}
	}
	return 0;
}	
	

