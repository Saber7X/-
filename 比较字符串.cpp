#include<stdio.h>
#include<string.h>//strcmp 
#include<ctype.h>//tolower
int c(char *a,char *b)//�Ƚ������ַ������Ƿ����
{
	int i;
	int j;
	i=strlen(a);
	j=strlen(b);
	if(i==j) return 1;
	else return 0;
 } 
int v(char *a,char *b)//�Ƚ������ַ���ȥ��Сд�ⳤ���Ƿ����
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
	if(strcmp(n,x)==0)//��ȫ��� ���Ƚ������У� 
	{
		printf("2");
	}
	else if(c(n,x)==0)//���Ȳ���� �����Ƚ��˳��ȣ� 
	{
		printf("1");
	}
	else if(v(n,x)==1)//��ĸ����Сдʱ������� ����ת��Сд�Ƚϳ��ȣ� 
	{
		printf("3");
	}
	else//��ȫ����� 
	{
		printf("4");
	}
	return 0;
}
