#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//nֻ����
	cin>>n;
	int left=0;
	int right=0;
	int a;//��һֻ���ϵ�λ��
	scanf("%d",&a);
	int x; 
	for(int i=1;i<n;i++)
	{
		scanf("%d",&x); 
		if(abs(x)>abs(a)&&x<0)//�ұ������� 
	 	{
	 		left++;
		 }
		 else if(abs(x)<abs(a)&&x>0)//���������
		 {
		 	right++; 
		  } 
	 } 
	 if((a<0&&right==0)||(a>0&&left==0))//����������ʱ�����û�������ߵ� ���� ����������ʱ���ұ�û�������ߵ�
	 {
	 	printf("1" ); 
	 }
	 else
	 {
	 	printf("%d",right+left+1);
	 }
	return 0;
 } 
