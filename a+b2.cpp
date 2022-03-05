#include<bits/stdc++.h>
using namespace std;


struct bign//用结构体来存储大数 
{
	int d[1001];//用来存储数的每一位 
	int len;//用来记录该数的长度 
	bign()//初始化结构体，详见2.8.3，书P72 
	{
		memset(d,0,sizeof(d));
		len=0;
	}
};


bign change(char str[])//结构体函数，将字符串传入进行转换和排序、、、、、 
{
	bign a;//定义结构体变量；
	a.len=strlen(str);//bign的长度就是字符串的长度，所以把长度赋给结构体里的len
	for(int i=0;i<a.len;i++)
	{
		a.d[i]=str[a.len-1-i]-'0';//为了方便计算，要把整数的高位存在数组的高位，整数的低位存储在数组的低位，而如果直接赋值则整数高位在数组低位，所以逆着赋值 
	 } 
	 return a;//已经对a.len和a.d[]赋完值，所以返回a给结构体 
}


int compare(bign a,bign b)//比较两个大数的大小
{
	if(a.len>b.len) return 1;
	else if(a.len <b.len ) return -1;
	else//长度相等的情况，从高位到低位每一位进行比较，一旦一个数大于了另一个数，那么那个数大 
	{
		for(int i=a.len-1;i>=0;i--)//从高位到低位
		{
			if(a.d[i]>b.d[i])//只要有一位a大，则a大 
			{
				return 1;
			 }
			else if(a.d[i]<b.d[i])//只要有一位b大，则b大
			{
				return -1; 
			 } 
		 } 
	 } 
	 return 0;
 } 
 
 
bign add(bign a,bign b)//高精度a+b，将排好序的两个存储大数的数组传入 
{
	bign c;//用来存储结果 
	int carry=0; 
	for(int i=0;i<a.len||i<b.len;i++)//因为是从低位到高位做加法，所以一定得到最高位才行，但此时不知道a和b哪个大，所以用||连接，以较长的那个作为界限
	{
		int temp=a.d[i]+b.d[i]+carry;//用来暂存a+b和上两位相加的进位的结果，方便后面做处理
		c.d[c.len++]=temp%10;//个位数为该位结果
		carry=temp/10;//计算进位 
	 }
	if(carry!=0)//如果最高位计算完之后，还有进位，则结果位数+1， 
	{
		c.d[c.len++]=carry;
	} 
	return c;//返回结果 
 } 


void print(bign a)//输出
{
	for(int i=a.len-1;i>=0;i--)//因为存储时是低位在前，所以反过来从高位开始输出 
	{
		printf("%d",a.d[i]);//输出 
	 } 
	 printf("\n");
 } 

int main()
{
	char str1[1001],str2[1001];
	while(scanf("%s%s",str1,str2)!=EOF)
	{
		bign a=change(str1);
		bign b=change(str2);
		print(add(a,b)) ;
	}
	//以字符串形式读入两个大数
	
	return 0;
}

