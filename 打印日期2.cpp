#include<bits/stdc++.h>
using namespace std;
bool isleap(int year)
{
	return(year%4==0&&year%100!=0)||(year%400==0);//�ж��Ƿ������� 
}
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
int main()
{
	int a,b,c;
	int sum;
	while(scanf("%d %d",&a,&b)!=EOF)//��ݣ����� 
	{
		int cnt=1;//ÿ�ּ�һ�����·�
		for(int i=1;i<=12;i++)
		{
			sum=b-month[i][isleap(a)];
			if(sum<=month[i+1][isleap(a)])
			{
				cnt++;
				c=sum;
				break;
			}
			
			b-=month[i][isleap(a)];
			cnt++;
		 } 
		printf("%04d-%02d-%02d\n",a,cnt,c);
	}
	return 0;
}
