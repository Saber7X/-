#include<stdio.h> 
#include <math.h>
int main ()
{
    double a, b, c, d;
    printf("����һԪ���η��̵�ϵ��a, b, c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
	d=b*b-4*a*c;
    if(a==0&&b==0&&c==0)
        printf("�����޽�!\n");
    else if(a==0&&b==0&&c!=0)
        printf("�����޽�!\n");
    else if(a==0&&b!=0&&c!=0)//bx+c=0 
        printf("������һ����: x=%.2f\n",-c/b);
    else if(a!=0&&d==0)//ֻ��һ�� x1=x2=-b/2a
        printf("������������ͬʵ��: x1=x2=%.2f\n",-b/(2*a));
    else if(a!=0&&d>0)//x1=x2=-b+-���ŵ϶���/2a
        printf("������������ͬʵ��:x1=%.2f x2=%.2f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    else if(a!=0&&d<0)//������ 
		printf("������������ͬ���   x1:%.2f+%.2fi   x2:%.2f+%.2fi",-b/(2*a),(sqrt(-d))/(2*a),b/(2*a),(-sqrt(-d))/(2*a));		
	return 0;
}
//https://www.cnblogs.com/xxl-h/p/12862487.html ���� 
// https://zhidao.baidu.com/question/752650551575906844.html ���� 
//https://zhidao.baidu.com/question/467683737.html sqrt�÷� 
//���л������ҵ� 
