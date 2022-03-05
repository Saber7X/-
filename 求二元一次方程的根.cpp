#include<stdio.h> 
#include <math.h>
int main ()
{
    double a, b, c, d;
    printf("输入一元二次方程的系数a, b, c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
	d=b*b-4*a*c;
    if(a==0&&b==0&&c==0)
        printf("方程无解!\n");
    else if(a==0&&b==0&&c!=0)
        printf("方程无解!\n");
    else if(a==0&&b!=0&&c!=0)//bx+c=0 
        printf("方程有一个根: x=%.2f\n",-c/b);
    else if(a!=0&&d==0)//只有一解 x1=x2=-b/2a
        printf("方程有两个相同实根: x1=x2=%.2f\n",-b/(2*a));
    else if(a!=0&&d>0)//x1=x2=-b+-根号迪尔塔/2a
        printf("方程有两个不同实根:x1=%.2f x2=%.2f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    else if(a!=0&&d<0)//看不懂 
		printf("方程有两个不同虚根   x1:%.2f+%.2fi   x2:%.2f+%.2fi",-b/(2*a),(sqrt(-d))/(2*a),b/(2*a),(-sqrt(-d))/(2*a));		
	return 0;
}
//https://www.cnblogs.com/xxl-h/p/12862487.html 代码 
// https://zhidao.baidu.com/question/752650551575906844.html 代码 
//https://zhidao.baidu.com/question/467683737.html sqrt用法 
//还有黄鳝教我的 
