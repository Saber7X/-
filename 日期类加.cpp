#include<bits/stdc++.h>
bool isleap(int year)
{
	return(year%4==0&&year%100!=0)||(year%400==0);//�ж��Ƿ������� 
}
using namespace std;
int main()
{
	int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
	int m,n;
	int j=0;
	int y,d;
	int ans[1000];//��¼���
	scanf("%d",&n);
	int cnt;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&y,&m,&d,&cnt);
		for(int k=0;k<cnt;k++)
		{
			d++;
			if(d==month[m][isleap(y)]+1)//���������� 
			{
				m++;//�·ݣ�1 
				d=1; 
			}
			if(m==13)
			{
				y++;//��ݣ�1 
				m=1;
			}
			//cnt--;//���������ۼ� 
		}
		ans[j]=y;
		j++;
		ans[j]=m;
		j++;
		ans[j]=d;
		j++;
	}
	//printf("%d %d %d %d",y,m,d,cnt);
	
	int c=0;
	for(int i=0;i<j;i++)
	{
		
		printf("%02d",ans[i]);
		c++;
		if(c==3)
		{
			c=0;
			printf("\n");
		}
		else
		{
			printf("-");
		}
	}
	 
	
	return 0;
}
