#include "stdio.h"
 
//函数:判断是否满足要求
unsigned int judge(unsigned int number,unsigned int num)
{
	int number_w,number_q,number_b,number_s,number_g;
 
	number_w = number/10000;     //号码万位
    number_q = (number/1000)%10; //号码千位
	number_b = (number/100)%10;  //号码百位
	number_s = (number/10)%10;   //号码十位
	number_g = number%10;        //号码个位
 
	if(number_w != 4 && number_q != 4 && number_b != 4 && number_s != 4 && number_g != 4)
		num++;
	return num;
}
 
int main()
{
	unsigned int number = 10000;  //奖券号码
	unsigned int num = 0;         //可用号码个数
 
	while(number < 100000)
	{
		num=judge(number,num);
		number++;
	}
 
	printf("可发出奖券 %d 张\n",num);
}
