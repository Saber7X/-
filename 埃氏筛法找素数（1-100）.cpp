#include<bits/stdc++.h>
using namespace std;
const int maxn=101;
int prime[maxn],pnum=101;
bool p[maxn]={0};
void find_prime()
{
	for(int i=2;i<maxn;i++)//����Ҫ�ҵķ�Χ,��ΪҪ��1��100����maxn==101��������<maxn; 
	{
		if(p[i]==0)//��������� 
		{
			prime[pnum]=i;//�������������� 
			printf("%d ",i); 
		 for(int j=i*i;j<maxn;j+=i)//�˲����д��if��Ҳ��д��if�⣬���Ҹ��˾���д������������Ҳ������һ���ظ����㣬�ţ��Ǿ�д������� 
		 {
		 	p[j]=1;//��� 
		}
		 } 
		  
	 } 
}
int main()
{
	find_prime();
	return 0;
}
