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
	else if(a.len <b.len ) return -1;
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


bign add(bign a,bign b)//�߾���a+b�����ź���������洢���������鴫�� 
{
	bign c;//�����洢��� 
	int carry+0; 
	for(int i=0;i<a.len||i<b.len;i++)//��Ϊ�Ǵӵ�λ����λ���ӷ�������һ���õ����λ���У�����ʱ��֪��a��b�ĸ���������||���ӣ��Խϳ����Ǹ���Ϊ����
	{
		int temp=a.d[i]+b.d[i]+carry;//�����ݴ�a+b������λ��ӵĽ�λ�Ľ�����������������
		c.d[c.len++]=temp%10;//��λ��Ϊ��λ���
		carry=temp/10;//�����λ 
	 }
	if(carry!=0)//������λ������֮�󣬻��н�λ������λ��+1�� 
	{
		c.d[c.len++]=carry;
	} 
	return c;//���ؽ�� 
 } 

int main()
{
	
	return 0;
}

