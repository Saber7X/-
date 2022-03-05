#include<stdio.h>
#include<string.h>//strcmp 
#include<ctype.h>//tolower
int c(char *a,char *b)//比较两串字符长度是否相等
{
	int i;
	int j;
	i=strlen(a);
	j=strlen(b);
	if(i==j) return 1;
	else return 0;
 } 
int v(char *a,char *b)//比较两串字符除去大小写外长度是否相等
{
	int i,j;
	j=strlen(a);
	 for(i=0;i<j;i++)
	 {
	 	a[i]=tolower(a[i]);
	 	b[i]=tolower(b[i]);
	 }
	 if(strcmp(a,b)==0)
	 {
	 	return 1;
	 }
	 else
	 {
	 	return 0;
	 }
 } 
int main()
{
	char n[10],x[10];
	gets(n);
	gets(x);
	if(strcmp(n,x)==0)//完全相等 （比较了所有） 
	{
		printf("2");
	}
	else if(c(n,x)==0)//长度不相等 （仅比较了长度） 
	{
		printf("1");
	}
	else if(v(n,x)==1)//字母都是小写时长度相等 （都转成小写比较长度） 
	{
		printf("3");
	}
	else//完全不相等 
	{
		printf("4");
	}
	return 0;
}
