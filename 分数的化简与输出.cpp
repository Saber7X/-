#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)//���Լ�� 
{
	if(b==0)
	{
		return a;
	}
	else
	{
		return gcd(b,a%b);
	}
}
int lcm(int a,int b)//��С������ 
{
	return a/gcd(a,b)*b;
}
struct fraction{//�ṹ��洢���� 
	int up,down;//���ӣ���ĸ 
}num[10];
fraction reduction(fraction result)//�ṹ�庯��
{
	if(result.down<0)//��ĸΪ����ʱ�����ӷ�ĸ������ǵ��෴�� 
	{
		result.down=-result.down ;
		result.up =-result.up; 
	 } 
	if(result.up==0)//����Ϊ0ʱ����ĸΪ1 
	{
		result.down=1; 
	}
	else//���Ӳ�Ϊ0ʱ 
	{
		int d=gcd(abs(result.down),abs(result.up));//���ӷ�ĸ�����Լ�� 
	}
	return result; 
 } 
 void showresult(fraction r)
 {
 	r=reduction(r);
 	if(r.down==1)
 	{
 		printf("%d",r.up);//��ĸΪ1ʱ��ֱ��������� 
	}
	else if(abs(r.up)>(r.down))//�ٷ��������Ӵ��ڷ�ĸ��
	{
		printf("%d %d/%d",r.up/r.down,r.up%r.down,r.down); 
	 } 
	else//����� 
	{
		printf("%d/%d",r.up ,r.down );
	}
 }
int main()
{
	*********************;
	return 0; 
	
 } 
