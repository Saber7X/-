#include "stdio.h"
 
//����:�ж��Ƿ�����Ҫ��
unsigned int judge(unsigned int number,unsigned int num)
{
	int number_w,number_q,number_b,number_s,number_g;
 
	number_w = number/10000;     //������λ
    number_q = (number/1000)%10; //����ǧλ
	number_b = (number/100)%10;  //�����λ
	number_s = (number/10)%10;   //����ʮλ
	number_g = number%10;        //�����λ
 
	if(number_w != 4 && number_q != 4 && number_b != 4 && number_s != 4 && number_g != 4)
		num++;
	return num;
}
 
int main()
{
	unsigned int number = 10000;  //��ȯ����
	unsigned int num = 0;         //���ú������
 
	while(number < 100000)
	{
		num=judge(number,num);
		number++;
	}
 
	printf("�ɷ�����ȯ %d ��\n",num);
}
