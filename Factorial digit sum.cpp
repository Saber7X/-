//#include<bits/stdc++.h>
//using namespace std;
//
//
//struct bign//�ýṹ�����洢���� 
//{
//	int d[1000];//�����洢����ÿһλ 
//	int len;//������¼�����ĳ��� 
//	bign()//��ʼ���ṹ�壬���2.8.3����P72 
//	{
//		memset(d,0,sizeof(d));
//		len=0;
//	}
//};
//
//
//bign change(char str[])//�ṹ�庯�������ַ����������ת�������򡢡������� 
//{
//	bign a;//����ṹ�������
//	a.len=strlen(str);//bign�ĳ��Ⱦ����ַ����ĳ��ȣ����԰ѳ��ȸ����ṹ�����len
//	for(int i=0;i<a.len;i++)
//	{
//		a.d[i]=str[a.len-1-i]-'0';//Ϊ�˷�����㣬Ҫ�������ĸ�λ��������ĸ�λ�������ĵ�λ�洢������ĵ�λ�������ֱ�Ӹ�ֵ��������λ�������λ���������Ÿ�ֵ 
//	 } 
//	 return a;//�Ѿ���a.len��a.d[]����ֵ�����Է���a���ṹ�� 
//}
//
//
//
//bign multi(bign a,int b)
//{
//	bign c;
//	int carry=0;//��λ
//	for(int i=0;i<a.len;i++) 
//	{
//		int temp=a.d[i]*b+carry;
//		c.d[c.len++]=temp%10;
//		carry=temp/10;
//	}
//	while(carry!=0)
//	{
//		c.d[c.len++]=carry%10;
//		carry/10;
//	}
//	return c;
//}
//char num[10000];
//int cnt;
//void print1(bign a)//���
//{
//	cnt=0;
//	for(int i=a.len-1;i>=0;i--)//��Ϊ�洢ʱ�ǵ�λ��ǰ�����Է������Ӹ�λ��ʼ��� 
//	{
//		num[cnt++]=a.d[i]-'0'; 
//	 } 
// } 
//
//
//void print(bign a)//���
//{
//	for(int i=a.len-1;i>=0;i--)//��Ϊ�洢ʱ�ǵ�λ��ǰ�����Է������Ӹ�λ��ʼ��� 
//	{
//		printf("%d",a.d[i]);//��� 
//	 } 
// } 
//
//int main()
//{
//	
//	/*for(int i=100;i>=1;i--)
//	{
//		
//		char str1[1000];
//		int str2=i;
//		bign a=change(str1);
//		//bign b=str2;
//		print1(multi(a,str2));
//		for(int i=0;i<cnt;i++)
//		{
//			str1[i]=num[i];
//		}
//		if(i==1)
//		{
//			print(multi(a,str2)) ;
//		}
//		cout<<i<<endl;
//	}*/
//	print(multi("1111111",111)) ;
//	
//	
//	return 0;
//}



// C = A * b, A >= 0, b > 0

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int sum=1;
	long long int sum1=1;
	long long int sum2=1;
	for(int i=100;i>=92;i--)// 690281878632192000
	{
		sum*=i;
	}
	for(int i=91;i>=83;i--)//284413750007587200
	{
		sum1*=i;
	}
	cout<<sum<<endl;
	cout<<sum1<<endl;

	return 0;
}

