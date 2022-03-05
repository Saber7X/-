#include <stdio.h> 
#include <math.h>

int main(){
    double a,b,c,r1,r2,dt;
    scanf("%lf %lf %lf",&a,&b,&c);
    dt=b*b-4*a*c;
    r1=(-b+sqrt(dt))/(2*a);
    r2=(-b-sqrt(dt))/(2*a);
    if (a!=0&&dt>=0) printf("r1=%7.2f\nr2=%7.2f",r1,r2);

    return 0;
}
