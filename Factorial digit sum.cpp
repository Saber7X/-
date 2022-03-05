//#include<bits/stdc++.h>
//using namespace std;
//
//
//struct bign//用结构体来存储大数 
//{
//	int d[1000];//用来存储数的每一位 
//	int len;//用来记录该数的长度 
//	bign()//初始化结构体，详见2.8.3，书P72 
//	{
//		memset(d,0,sizeof(d));
//		len=0;
//	}
//};
//
//
//bign change(char str[])//结构体函数，将字符串传入进行转换和排序、、、、、 
//{
//	bign a;//定义结构体变量；
//	a.len=strlen(str);//bign的长度就是字符串的长度，所以把长度赋给结构体里的len
//	for(int i=0;i<a.len;i++)
//	{
//		a.d[i]=str[a.len-1-i]-'0';//为了方便计算，要把整数的高位存在数组的高位，整数的低位存储在数组的低位，而如果直接赋值则整数高位在数组低位，所以逆着赋值 
//	 } 
//	 return a;//已经对a.len和a.d[]赋完值，所以返回a给结构体 
//}
//
//
//
//bign multi(bign a,int b)
//{
//	bign c;
//	int carry=0;//进位
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
//void print1(bign a)//输出
//{
//	cnt=0;
//	for(int i=a.len-1;i>=0;i--)//因为存储时是低位在前，所以反过来从高位开始输出 
//	{
//		num[cnt++]=a.d[i]-'0'; 
//	 } 
// } 
//
//
//void print(bign a)//输出
//{
//	for(int i=a.len-1;i>=0;i--)//因为存储时是低位在前，所以反过来从高位开始输出 
//	{
//		printf("%d",a.d[i]);//输出 
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

