#include<bits/stdc++.h>
using namespace std;


struct bign//用结构体来存储大数 
{
	int d[1000];//用来存储数的每一位 
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
	else if(a.len <b.len ) 
	{
		return -1;
	}
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

bool t=0;
bign sub(bign a,bign b)//减法 
{
	t=0;
	bign c;
	if(compare(a,b)==-1)
	{
		t=1;
		for(int i=0;i<a.len||i<b.len;i++)//以较长的为界限 
		{
			if(b.d[i]<a.d[i])//如果不够减 
			{
				b.d[i+1]--;//向高位借1
				b.d[i]+=10;//当前位加10 
			 } 
			 c.d[c.len++]=b.d[i]-a.d[i];//减法结果为当前位结果 
		}
	}
	else if(compare(a,b)==1)
	{
		for(int i=0;i<a.len||i<b.len;i++)//以较长的为界限 
		{
			if(a.d[i]<b.d[i])//如果不够减 
			{
				a.d[i+1]--;//向高位借1
				a.d[i]+=10;//当前位加10 
			 } 
			 c.d[c.len++]=a.d[i]-b.d[i];//减法结果为当前位结果 
		}
	}
	while(c.len-1>=1&&c.d[c.len-1]==0)
	{
		c.len--;//除去最高位的0，同时保留一位最低为； 
	 } 
	 return c; 
}


void print(bign a)//输出
{
	if(t==1)
	{
		printf("-");
	}
	for(int i=a.len-1;i>=0;i--)//因为存储时是低位在前，所以反过来从高位开始输出 
	{
		printf("%d",a.d[i]);//输出 
	 } 
 } 

int main()
{
	char str1[1000],str2[1000];
	scanf("%s%s",str1,str2);//以字符串形式读入两个大数
	bign a=change(str1);
	bign b=change(str2);
	print(sub(a,b)) ;
	return 0;
}

