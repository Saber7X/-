#include<bits/stdc++.h>
using namespace std;


struct bign//�ýṹ�����洢���� 
{
	int d[1000];//�����洢����ÿһλ 
	int len;//������¼�����ĳ��� 
	bign()//��ʼ���ṹ�壬���2.8.3����P72 
	{
		memset(d,0,sizeof(d));
		len=0;
	}
};


bign change(char str[])//�ṹ�庯�������ַ����������ת�������򡢡������� 
{
	bign a;//����ṹ�������
	a.len=strlen(str);//bign�ĳ��Ⱦ����ַ����ĳ��ȣ����԰ѳ��ȸ����ṹ�����len
	for(int i=0;i<a.len;i++)
	{
		a.d[i]=str[a.len-1-i]-'0';//Ϊ�˷�����㣬Ҫ�������ĸ�λ��������ĸ�λ�������ĵ�λ�洢������ĵ�λ�������ֱ�Ӹ�ֵ��������λ�������λ���������Ÿ�ֵ 
	 } 
	 return a;//�Ѿ���a.len��a.d[]����ֵ�����Է���a���ṹ�� 
}
int compare(bign a,bign b)//�Ƚ����������Ĵ�С
{
	if(a.len>b.len) return 1;
	else if(a.len <b.len ) 
	{
		return -1;
	}
	else//������ȵ�������Ӹ�λ����λÿһλ���бȽϣ�һ��һ������������һ��������ô�Ǹ����� 
	{
		for(int i=a.len-1;i>=0;i--)//�Ӹ�λ����λ
		{
			if(a.d[i]>b.d[i])//ֻҪ��һλa����a�� 
			{
				return 1;
			 }
			else if(a.d[i]<b.d[i])//ֻҪ��һλb����b��
			{
				return -1; 
			 } 
		 } 
	 } 
	 return 0;
 } 

bool t=0;
bign sub(bign a,bign b)//���� 
{
	t=0;
	bign c;
	if(compare(a,b)==-1)
	{
		t=1;
		for(int i=0;i<a.len||i<b.len;i++)//�Խϳ���Ϊ���� 
		{
			if(b.d[i]<a.d[i])//��������� 
			{
				b.d[i+1]--;//���λ��1
				b.d[i]+=10;//��ǰλ��10 
			 } 
			 c.d[c.len++]=b.d[i]-a.d[i];//�������Ϊ��ǰλ��� 
		}
	}
	else if(compare(a,b)==1)
	{
		for(int i=0;i<a.len||i<b.len;i++)//�Խϳ���Ϊ���� 
		{
			if(a.d[i]<b.d[i])//��������� 
			{
				a.d[i+1]--;//���λ��1
				a.d[i]+=10;//��ǰλ��10 
			 } 
			 c.d[c.len++]=a.d[i]-b.d[i];//�������Ϊ��ǰλ��� 
		}
	}
	while(c.len-1>=1&&c.d[c.len-1]==0)
	{
		c.len--;//��ȥ���λ��0��ͬʱ����һλ���Ϊ�� 
	 } 
	 return c; 
}


void print(bign a)//���
{
	if(t==1)
	{
		printf("-");
	}
	for(int i=a.len-1;i>=0;i--)//��Ϊ�洢ʱ�ǵ�λ��ǰ�����Է������Ӹ�λ��ʼ��� 
	{
		printf("%d",a.d[i]);//��� 
	 } 
 } 

int main()
{
	char str1[1000],str2[1000];
	scanf("%s%s",str1,str2);//���ַ�����ʽ������������
	bign a=change(str1);
	bign b=change(str2);
	print(sub(a,b)) ;
	return 0;
}

